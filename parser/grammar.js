module.exports = grammar({
    name: 'smtlib2',
    rules: {
        source_file: $ => repeat(choice($.comment, $.command)),

        comment: $ => seq(';', /[\u0020-\u007E\u0080-\uFFFF]*/),

        numeral: $ => choice('0', /[1-9][0-9]*/),

        decimal: $ => seq($.numeral, '.', /[0-9]*/),

        hexadecimal: $ => seq('#x', /[0-9a-fA-F]+/),

        binary: $ => seq('#b', /[0-1]+/),

        string: $ => seq('"', /[a-zA-Z ]*/, '"'),

        reserved: $ => choice(
            'BINARY', 'DECIMAL', 'HEXADECIMAL', 'NUMERAL', 'STRING', '_', '!',
            'as', 'let', 'exists', 'forall', 'match', 'par'
        ),

        simple_symbol: $ => /[a-zA-Z0-9~!@$\^&\*_\-\+=<>\.\?/]+/,

        quoted_symbol: $ => /\|[\u0020-\u005B\u005D-\u007B\u0080-\uFFFF}~]+\|/,

        symbol: $ => choice(
            $.simple_symbol,
            $.quoted_symbol
        ),

        index: $ => choice(
            $.numeral,
            $.symbol
        ),

        spec_constant: $ => choice(
            $.numeral,
            $.decimal,
            $.hexadecimal,
            $.binary,
            $.string
        ),

        keyword: $ => seq(
            ':', $.simple_symbol
        ),

        s_expr: $ => choice(
            $.spec_constant,
            $.symbol,
            $.reserved,
            $.keyword,
            seq('(', repeat($.s_expr), ')')
        ),

        identifier: $ => choice(
            $.symbol,
            seq('(', '_', $.symbol, repeat1($.index), ')')
        ),

        attribute_value: $ => choice(
            $.spec_constant,
            $.symbol,
            seq('(', repeat($.s_expr), ')')
        ),

        attribute: $ => seq(
            $.keyword, optional($.attribute_value)
        ),

        sort: $ => choice(
            $.identifier,
            seq('(', $.identifier, repeat1($.sort), ')')
        ),

        qual_identifier: $ => choice(
            $.identifier,
            seq('(', 'as', $.identifier, $.sort, ')')
        ),

        var_binding: $ => seq(
            '(', $.symbol, $.term, ')',
        ),

        sorted_var: $ => seq(
            '(', $.symbol, $.sort, ')'
        ),

        pattern: $ => choice(
            $.symbol,
            seq('(', repeat1($.symbol), ')')
        ),

        match_case: $ => seq(
            '(', $.pattern, $.term, ')'
        ),

        term: $ => choice(
            $.spec_constant,
            $.qual_identifier,
            seq('(', $.qual_identifier, repeat1($.term), ')'),
            seq('(', 'let', '(', repeat1($.var_binding), ')', $.term, ')'),
            seq('(', 'forall', '(', repeat1($.sorted_var), ')', $.term, ')'),
            seq('(', 'exists', '(', repeat1($.sorted_var), ')', $.term, ')'),
            seq('(', 'match', $.term, repeat1($.match_case), ')'),
            seq('(', '!', $.term, repeat1($.attribute), ')')
        ),

        sort_symbol_decl: $ => seq(
            '(', $.identifier, $.numeral, repeat($.attribute), ')'
        ),

        meta_spec_constant: $ => choice(
            'NUMERAL', 'DECIMAL', 'STRING'
        ),

        fun_symbol_decl: $ => choice(
            seq('(', $.spec_constant, $.sort, repeat($.attribute), ')'),
            seq('(', $.meta_spec_constant, $.sort, repeat($.attribute), ')'),
            seq('(', $.identifier, repeat1($.sort), repeat($.attribute))
        ),

        par_fun_symbol_decl: $ => choice(
            $.fun_symbol_decl,
            seq('(', 'par', '(', repeat1($.symbol), ')', '(',
                $.identifier, repeat1($.sort), repeat($.attribute), ')', ')')
        ),

        theory_attribute: $ => choice(
            seq(':sorts', '(', repeat1($.sort_symbol_decl), ')'),
            seq(':funs', '(', repeat1($.par_fun_symbol_decl), ')'),
            seq(':sorts-description', '(', $.string, ')'),
            seq(':funs-description', '(', $.string, ')'),
            seq(':definition', '(', $.string, ')'),
            seq(':values', '(', $.string, ')'),
            seq(':notes', '(', $.string, ')'),
            $.attribute
        ),

        theory_decl: $ => seq(
            '(', 'theory', $.symbol, repeat1($.theory_attribute), ')'
        ),

        logic_attribute: $ => choice(
            seq(':theories', '(', repeat1($.symbol), ')'),
            seq(':language', $.string),
            seq(':extensions', $.string),
            seq(':values', $.string),
            seq(':notes', $.string),
            $.attribute
        ),

        logic: $ => seq(
            '(', 'logic', $.symbol, repeat1($.logic_attribute), ')'
        ),

        sort_dec: $ => seq(
            '(', $.symbol, $.numeral, ')'
        ),

        selector_dec: $ => seq(
            '(', $.symbol, $.sort, ')'
        ),

        constructor_dec: $ => seq(
            '(', $.symbol, repeat($.selector_dec), ')'
        ),

        datatype_dec: $ => choice(
            seq('(', repeat1($.constructor_dec), ')'),
            seq('(', 'par', '(', repeat1($.symbol), ')',
                '(', repeat1($.constructor_dec), ')', ')')
        ),

        function_dec: $ => seq(
            '(', $.symbol, '(', repeat($.sorted_var), ')', $.sort, ')'
        ),

        function_def: $ => seq(
            $.symbol, '(', repeat($.sorted_var), ')', $.sort, $.term
        ),

        prop_literal: $ => choice(
            $.symbol,
            seq('(', 'not', $.symbol, ')')
        ),

        b_value: $ => choice(
            'true', 'false'
        ),

        option: $ => choice(
            seq(':diagnostic-output-channel', $.string),
            seq(':global-declaration', $.b_value),
            seq(':interactive-mode', $.b_value),
            seq(':print-success', $.b_value),
            seq(':produce-assertions', $.b_value),
            seq(':produce-models', $.b_value),
            seq(':produce-proofs', $.b_value),
            seq(':produce-unsat-assumptions', $.b_value),
            seq(':produce-unsat-cores', $.b_value),
            seq(':random-seed', $.numeral),
            seq(':regular-output-channel', $.string),
            seq(':reproducible-resource-limit', $.numeral),
            seq(':verbosity', $.numeral),
            $.attribute
        ),

        info_flag: $ => choice(
            ':all-statistics',
            ':assertion-stack-levels',
            ':authors',
            ':error-behavior',
            ':name',
            ':reason-unknown',
            ':version',
            $.keyword
        ),

        command: $ => choice(
            seq('(', 'assert', $.term, ')'),
            seq('(', 'check-sat', ')'),
            seq('(', 'check-sat-assuming', '(', repeat($.prop_literal), ')', ')'),
            seq('(', 'declare-const', $.symbol, $.sort, ')'),
            seq('(', 'declare-datatype', $.symbol, $.datatype_dec, ')'),
            // Not completly correct.
            seq('(', 'declare-datatypes', '(', repeat1($.sort_dec), ')',
                '(', repeat1($.datatype_dec), ')', ')'),
            seq('(', 'declare-fun', $.symbol, '(', repeat($.sort), ')', $.sort, ')'),
            seq('(', 'declare-sort', $.symbol, $.numeral, ')'),
            seq('(', 'define-fun', $.function_def, ')'),
            seq('(', 'define-fun-rec', $.function_def, ')'),
            seq('(', 'define-sort', $.symbol, '(', repeat($.symbol), ')',
                $.sort, ')'),
            seq('(', 'echo', $.string, ')'),
            seq('(', 'exit', ')'),
            seq('(', 'get-assertions', ')'),
            seq('(', 'get-assignment', ')'),
            seq('(', 'get-info', $.info_flag, ')'),
            seq('(', 'get-model', ')'),
            seq('(', 'get-option', $.keyword, ')'),
            seq('(', 'get-proof', ')'),
            seq('(', 'get-unsat-assumptions', ')'),
            seq('(', 'get-unsat-core', ')'),
            seq('(', 'get-value', '(', repeat1($.term), ')', ')'),
            seq('(', 'pop', $.numeral, ')'),
            seq('(', 'push', $.numeral, ')'),
            seq('(', 'reset', ')'),
            seq('(', 'reset-assertions', ')'),
            seq('(', 'set-info', $.attribute, ')'),
            seq('(', 'set-logic', $.symbol, ')'),
            seq('(', 'set-option', $.option, ')'),
        )
    }
});
