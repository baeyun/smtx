#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 232
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 133
#define ALIAS_COUNT 0
#define TOKEN_COUNT 85
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_SEMI = 1,
  aux_sym_comment_token1 = 2,
  anon_sym_0 = 3,
  aux_sym_numeral_token1 = 4,
  anon_sym_DOT = 5,
  aux_sym_decimal_token1 = 6,
  anon_sym_POUNDx = 7,
  aux_sym_hexadecimal_token1 = 8,
  anon_sym_POUNDb = 9,
  aux_sym_binary_token1 = 10,
  anon_sym_DQUOTE = 11,
  aux_sym_string_token1 = 12,
  anon_sym_BINARY = 13,
  anon_sym_DECIMAL = 14,
  anon_sym_HEXADECIMAL = 15,
  anon_sym_NUMERAL = 16,
  anon_sym_STRING = 17,
  anon_sym__ = 18,
  anon_sym_BANG = 19,
  anon_sym_as = 20,
  anon_sym_let = 21,
  anon_sym_exists = 22,
  anon_sym_forall = 23,
  anon_sym_match = 24,
  anon_sym_par = 25,
  sym_simple_symbol = 26,
  sym_quoted_symbol = 27,
  anon_sym_COLON = 28,
  anon_sym_LPAREN = 29,
  anon_sym_RPAREN = 30,
  anon_sym_theory = 31,
  anon_sym_logic = 32,
  anon_sym_not = 33,
  anon_sym_true = 34,
  anon_sym_false = 35,
  anon_sym_COLONdiagnostic_DASHoutput_DASHchannel = 36,
  anon_sym_COLONglobal_DASHdeclaration = 37,
  anon_sym_COLONinteractive_DASHmode = 38,
  anon_sym_COLONprint_DASHsuccess = 39,
  anon_sym_COLONproduce_DASHassertions = 40,
  anon_sym_COLONproduce_DASHmodels = 41,
  anon_sym_COLONproduce_DASHproofs = 42,
  anon_sym_COLONproduce_DASHunsat_DASHassumptions = 43,
  anon_sym_COLONproduce_DASHunsat_DASHcores = 44,
  anon_sym_COLONrandom_DASHseed = 45,
  anon_sym_COLONregular_DASHoutput_DASHchannel = 46,
  anon_sym_COLONreproducible_DASHresource_DASHlimit = 47,
  anon_sym_COLONverbosity = 48,
  anon_sym_COLONall_DASHstatistics = 49,
  anon_sym_COLONassertion_DASHstack_DASHlevels = 50,
  anon_sym_COLONauthors = 51,
  anon_sym_COLONerror_DASHbehavior = 52,
  anon_sym_COLONname = 53,
  anon_sym_COLONreason_DASHunknown = 54,
  anon_sym_COLONversion = 55,
  anon_sym_assert = 56,
  anon_sym_check_DASHsat = 57,
  anon_sym_check_DASHsat_DASHassuming = 58,
  anon_sym_declare_DASHconst = 59,
  anon_sym_declare_DASHdatatype = 60,
  anon_sym_declare_DASHdatatypes = 61,
  anon_sym_declare_DASHfun = 62,
  anon_sym_declare_DASHsort = 63,
  anon_sym_define_DASHfun = 64,
  anon_sym_define_DASHfun_DASHrec = 65,
  anon_sym_define_DASHsort = 66,
  anon_sym_echo = 67,
  anon_sym_exit = 68,
  anon_sym_get_DASHassertions = 69,
  anon_sym_get_DASHassignment = 70,
  anon_sym_get_DASHinfo = 71,
  anon_sym_get_DASHmodel = 72,
  anon_sym_get_DASHoption = 73,
  anon_sym_get_DASHproof = 74,
  anon_sym_get_DASHunsat_DASHassumptions = 75,
  anon_sym_get_DASHunsat_DASHcore = 76,
  anon_sym_get_DASHvalue = 77,
  anon_sym_pop = 78,
  anon_sym_push = 79,
  anon_sym_reset = 80,
  anon_sym_reset_DASHassertions = 81,
  anon_sym_set_DASHinfo = 82,
  anon_sym_set_DASHlogic = 83,
  anon_sym_set_DASHoption = 84,
  sym_source_file = 85,
  sym_comment = 86,
  sym_numeral = 87,
  sym_decimal = 88,
  sym_hexadecimal = 89,
  sym_binary = 90,
  sym_string = 91,
  sym_reserved = 92,
  sym_symbol = 93,
  sym_index = 94,
  sym_spec_constant = 95,
  sym_keyword = 96,
  sym_s_expr = 97,
  sym_identifier = 98,
  sym_attribute_value = 99,
  sym_attribute = 100,
  sym_sort = 101,
  sym_qual_identifier = 102,
  sym_var_binding = 103,
  sym_sorted_var = 104,
  sym_pattern = 105,
  sym_match_case = 106,
  sym_term = 107,
  sym_sort_dec = 108,
  sym_selector_dec = 109,
  sym_constructor_dec = 110,
  sym_datatype_dec = 111,
  sym_function_def = 112,
  sym_prop_literal = 113,
  sym_b_value = 114,
  sym_option = 115,
  sym_info_flag = 116,
  sym_command = 117,
  aux_sym_source_file_repeat1 = 118,
  aux_sym_s_expr_repeat1 = 119,
  aux_sym_identifier_repeat1 = 120,
  aux_sym_sort_repeat1 = 121,
  aux_sym_pattern_repeat1 = 122,
  aux_sym_term_repeat1 = 123,
  aux_sym_term_repeat2 = 124,
  aux_sym_term_repeat3 = 125,
  aux_sym_term_repeat4 = 126,
  aux_sym_term_repeat5 = 127,
  aux_sym_constructor_dec_repeat1 = 128,
  aux_sym_datatype_dec_repeat1 = 129,
  aux_sym_command_repeat1 = 130,
  aux_sym_command_repeat2 = 131,
  aux_sym_command_repeat3 = 132,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_0] = "0",
  [aux_sym_numeral_token1] = "numeral_token1",
  [anon_sym_DOT] = ".",
  [aux_sym_decimal_token1] = "decimal_token1",
  [anon_sym_POUNDx] = "#x",
  [aux_sym_hexadecimal_token1] = "hexadecimal_token1",
  [anon_sym_POUNDb] = "#b",
  [aux_sym_binary_token1] = "binary_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_BINARY] = "BINARY",
  [anon_sym_DECIMAL] = "DECIMAL",
  [anon_sym_HEXADECIMAL] = "HEXADECIMAL",
  [anon_sym_NUMERAL] = "NUMERAL",
  [anon_sym_STRING] = "STRING",
  [anon_sym__] = "_",
  [anon_sym_BANG] = "!",
  [anon_sym_as] = "as",
  [anon_sym_let] = "let",
  [anon_sym_exists] = "exists",
  [anon_sym_forall] = "forall",
  [anon_sym_match] = "match",
  [anon_sym_par] = "par",
  [sym_simple_symbol] = "simple_symbol",
  [sym_quoted_symbol] = "quoted_symbol",
  [anon_sym_COLON] = ":",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_theory] = "theory",
  [anon_sym_logic] = "logic",
  [anon_sym_not] = "not",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_COLONdiagnostic_DASHoutput_DASHchannel] = ":diagnostic-output-channel",
  [anon_sym_COLONglobal_DASHdeclaration] = ":global-declaration",
  [anon_sym_COLONinteractive_DASHmode] = ":interactive-mode",
  [anon_sym_COLONprint_DASHsuccess] = ":print-success",
  [anon_sym_COLONproduce_DASHassertions] = ":produce-assertions",
  [anon_sym_COLONproduce_DASHmodels] = ":produce-models",
  [anon_sym_COLONproduce_DASHproofs] = ":produce-proofs",
  [anon_sym_COLONproduce_DASHunsat_DASHassumptions] = ":produce-unsat-assumptions",
  [anon_sym_COLONproduce_DASHunsat_DASHcores] = ":produce-unsat-cores",
  [anon_sym_COLONrandom_DASHseed] = ":random-seed",
  [anon_sym_COLONregular_DASHoutput_DASHchannel] = ":regular-output-channel",
  [anon_sym_COLONreproducible_DASHresource_DASHlimit] = ":reproducible-resource-limit",
  [anon_sym_COLONverbosity] = ":verbosity",
  [anon_sym_COLONall_DASHstatistics] = ":all-statistics",
  [anon_sym_COLONassertion_DASHstack_DASHlevels] = ":assertion-stack-levels",
  [anon_sym_COLONauthors] = ":authors",
  [anon_sym_COLONerror_DASHbehavior] = ":error-behavior",
  [anon_sym_COLONname] = ":name",
  [anon_sym_COLONreason_DASHunknown] = ":reason-unknown",
  [anon_sym_COLONversion] = ":version",
  [anon_sym_assert] = "assert",
  [anon_sym_check_DASHsat] = "check-sat",
  [anon_sym_check_DASHsat_DASHassuming] = "check-sat-assuming",
  [anon_sym_declare_DASHconst] = "declare-const",
  [anon_sym_declare_DASHdatatype] = "declare-datatype",
  [anon_sym_declare_DASHdatatypes] = "declare-datatypes",
  [anon_sym_declare_DASHfun] = "declare-fun",
  [anon_sym_declare_DASHsort] = "declare-sort",
  [anon_sym_define_DASHfun] = "define-fun",
  [anon_sym_define_DASHfun_DASHrec] = "define-fun-rec",
  [anon_sym_define_DASHsort] = "define-sort",
  [anon_sym_echo] = "echo",
  [anon_sym_exit] = "exit",
  [anon_sym_get_DASHassertions] = "get-assertions",
  [anon_sym_get_DASHassignment] = "get-assignment",
  [anon_sym_get_DASHinfo] = "get-info",
  [anon_sym_get_DASHmodel] = "get-model",
  [anon_sym_get_DASHoption] = "get-option",
  [anon_sym_get_DASHproof] = "get-proof",
  [anon_sym_get_DASHunsat_DASHassumptions] = "get-unsat-assumptions",
  [anon_sym_get_DASHunsat_DASHcore] = "get-unsat-core",
  [anon_sym_get_DASHvalue] = "get-value",
  [anon_sym_pop] = "pop",
  [anon_sym_push] = "push",
  [anon_sym_reset] = "reset",
  [anon_sym_reset_DASHassertions] = "reset-assertions",
  [anon_sym_set_DASHinfo] = "set-info",
  [anon_sym_set_DASHlogic] = "set-logic",
  [anon_sym_set_DASHoption] = "set-option",
  [sym_source_file] = "source_file",
  [sym_comment] = "comment",
  [sym_numeral] = "numeral",
  [sym_decimal] = "decimal",
  [sym_hexadecimal] = "hexadecimal",
  [sym_binary] = "binary",
  [sym_string] = "string",
  [sym_reserved] = "reserved",
  [sym_symbol] = "symbol",
  [sym_index] = "index",
  [sym_spec_constant] = "spec_constant",
  [sym_keyword] = "keyword",
  [sym_s_expr] = "s_expr",
  [sym_identifier] = "identifier",
  [sym_attribute_value] = "attribute_value",
  [sym_attribute] = "attribute",
  [sym_sort] = "sort",
  [sym_qual_identifier] = "qual_identifier",
  [sym_var_binding] = "var_binding",
  [sym_sorted_var] = "sorted_var",
  [sym_pattern] = "pattern",
  [sym_match_case] = "match_case",
  [sym_term] = "term",
  [sym_sort_dec] = "sort_dec",
  [sym_selector_dec] = "selector_dec",
  [sym_constructor_dec] = "constructor_dec",
  [sym_datatype_dec] = "datatype_dec",
  [sym_function_def] = "function_def",
  [sym_prop_literal] = "prop_literal",
  [sym_b_value] = "b_value",
  [sym_option] = "option",
  [sym_info_flag] = "info_flag",
  [sym_command] = "command",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_s_expr_repeat1] = "s_expr_repeat1",
  [aux_sym_identifier_repeat1] = "identifier_repeat1",
  [aux_sym_sort_repeat1] = "sort_repeat1",
  [aux_sym_pattern_repeat1] = "pattern_repeat1",
  [aux_sym_term_repeat1] = "term_repeat1",
  [aux_sym_term_repeat2] = "term_repeat2",
  [aux_sym_term_repeat3] = "term_repeat3",
  [aux_sym_term_repeat4] = "term_repeat4",
  [aux_sym_term_repeat5] = "term_repeat5",
  [aux_sym_constructor_dec_repeat1] = "constructor_dec_repeat1",
  [aux_sym_datatype_dec_repeat1] = "datatype_dec_repeat1",
  [aux_sym_command_repeat1] = "command_repeat1",
  [aux_sym_command_repeat2] = "command_repeat2",
  [aux_sym_command_repeat3] = "command_repeat3",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_0] = anon_sym_0,
  [aux_sym_numeral_token1] = aux_sym_numeral_token1,
  [anon_sym_DOT] = anon_sym_DOT,
  [aux_sym_decimal_token1] = aux_sym_decimal_token1,
  [anon_sym_POUNDx] = anon_sym_POUNDx,
  [aux_sym_hexadecimal_token1] = aux_sym_hexadecimal_token1,
  [anon_sym_POUNDb] = anon_sym_POUNDb,
  [aux_sym_binary_token1] = aux_sym_binary_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_BINARY] = anon_sym_BINARY,
  [anon_sym_DECIMAL] = anon_sym_DECIMAL,
  [anon_sym_HEXADECIMAL] = anon_sym_HEXADECIMAL,
  [anon_sym_NUMERAL] = anon_sym_NUMERAL,
  [anon_sym_STRING] = anon_sym_STRING,
  [anon_sym__] = anon_sym__,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_exists] = anon_sym_exists,
  [anon_sym_forall] = anon_sym_forall,
  [anon_sym_match] = anon_sym_match,
  [anon_sym_par] = anon_sym_par,
  [sym_simple_symbol] = sym_simple_symbol,
  [sym_quoted_symbol] = sym_quoted_symbol,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_theory] = anon_sym_theory,
  [anon_sym_logic] = anon_sym_logic,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_COLONdiagnostic_DASHoutput_DASHchannel] = anon_sym_COLONdiagnostic_DASHoutput_DASHchannel,
  [anon_sym_COLONglobal_DASHdeclaration] = anon_sym_COLONglobal_DASHdeclaration,
  [anon_sym_COLONinteractive_DASHmode] = anon_sym_COLONinteractive_DASHmode,
  [anon_sym_COLONprint_DASHsuccess] = anon_sym_COLONprint_DASHsuccess,
  [anon_sym_COLONproduce_DASHassertions] = anon_sym_COLONproduce_DASHassertions,
  [anon_sym_COLONproduce_DASHmodels] = anon_sym_COLONproduce_DASHmodels,
  [anon_sym_COLONproduce_DASHproofs] = anon_sym_COLONproduce_DASHproofs,
  [anon_sym_COLONproduce_DASHunsat_DASHassumptions] = anon_sym_COLONproduce_DASHunsat_DASHassumptions,
  [anon_sym_COLONproduce_DASHunsat_DASHcores] = anon_sym_COLONproduce_DASHunsat_DASHcores,
  [anon_sym_COLONrandom_DASHseed] = anon_sym_COLONrandom_DASHseed,
  [anon_sym_COLONregular_DASHoutput_DASHchannel] = anon_sym_COLONregular_DASHoutput_DASHchannel,
  [anon_sym_COLONreproducible_DASHresource_DASHlimit] = anon_sym_COLONreproducible_DASHresource_DASHlimit,
  [anon_sym_COLONverbosity] = anon_sym_COLONverbosity,
  [anon_sym_COLONall_DASHstatistics] = anon_sym_COLONall_DASHstatistics,
  [anon_sym_COLONassertion_DASHstack_DASHlevels] = anon_sym_COLONassertion_DASHstack_DASHlevels,
  [anon_sym_COLONauthors] = anon_sym_COLONauthors,
  [anon_sym_COLONerror_DASHbehavior] = anon_sym_COLONerror_DASHbehavior,
  [anon_sym_COLONname] = anon_sym_COLONname,
  [anon_sym_COLONreason_DASHunknown] = anon_sym_COLONreason_DASHunknown,
  [anon_sym_COLONversion] = anon_sym_COLONversion,
  [anon_sym_assert] = anon_sym_assert,
  [anon_sym_check_DASHsat] = anon_sym_check_DASHsat,
  [anon_sym_check_DASHsat_DASHassuming] = anon_sym_check_DASHsat_DASHassuming,
  [anon_sym_declare_DASHconst] = anon_sym_declare_DASHconst,
  [anon_sym_declare_DASHdatatype] = anon_sym_declare_DASHdatatype,
  [anon_sym_declare_DASHdatatypes] = anon_sym_declare_DASHdatatypes,
  [anon_sym_declare_DASHfun] = anon_sym_declare_DASHfun,
  [anon_sym_declare_DASHsort] = anon_sym_declare_DASHsort,
  [anon_sym_define_DASHfun] = anon_sym_define_DASHfun,
  [anon_sym_define_DASHfun_DASHrec] = anon_sym_define_DASHfun_DASHrec,
  [anon_sym_define_DASHsort] = anon_sym_define_DASHsort,
  [anon_sym_echo] = anon_sym_echo,
  [anon_sym_exit] = anon_sym_exit,
  [anon_sym_get_DASHassertions] = anon_sym_get_DASHassertions,
  [anon_sym_get_DASHassignment] = anon_sym_get_DASHassignment,
  [anon_sym_get_DASHinfo] = anon_sym_get_DASHinfo,
  [anon_sym_get_DASHmodel] = anon_sym_get_DASHmodel,
  [anon_sym_get_DASHoption] = anon_sym_get_DASHoption,
  [anon_sym_get_DASHproof] = anon_sym_get_DASHproof,
  [anon_sym_get_DASHunsat_DASHassumptions] = anon_sym_get_DASHunsat_DASHassumptions,
  [anon_sym_get_DASHunsat_DASHcore] = anon_sym_get_DASHunsat_DASHcore,
  [anon_sym_get_DASHvalue] = anon_sym_get_DASHvalue,
  [anon_sym_pop] = anon_sym_pop,
  [anon_sym_push] = anon_sym_push,
  [anon_sym_reset] = anon_sym_reset,
  [anon_sym_reset_DASHassertions] = anon_sym_reset_DASHassertions,
  [anon_sym_set_DASHinfo] = anon_sym_set_DASHinfo,
  [anon_sym_set_DASHlogic] = anon_sym_set_DASHlogic,
  [anon_sym_set_DASHoption] = anon_sym_set_DASHoption,
  [sym_source_file] = sym_source_file,
  [sym_comment] = sym_comment,
  [sym_numeral] = sym_numeral,
  [sym_decimal] = sym_decimal,
  [sym_hexadecimal] = sym_hexadecimal,
  [sym_binary] = sym_binary,
  [sym_string] = sym_string,
  [sym_reserved] = sym_reserved,
  [sym_symbol] = sym_symbol,
  [sym_index] = sym_index,
  [sym_spec_constant] = sym_spec_constant,
  [sym_keyword] = sym_keyword,
  [sym_s_expr] = sym_s_expr,
  [sym_identifier] = sym_identifier,
  [sym_attribute_value] = sym_attribute_value,
  [sym_attribute] = sym_attribute,
  [sym_sort] = sym_sort,
  [sym_qual_identifier] = sym_qual_identifier,
  [sym_var_binding] = sym_var_binding,
  [sym_sorted_var] = sym_sorted_var,
  [sym_pattern] = sym_pattern,
  [sym_match_case] = sym_match_case,
  [sym_term] = sym_term,
  [sym_sort_dec] = sym_sort_dec,
  [sym_selector_dec] = sym_selector_dec,
  [sym_constructor_dec] = sym_constructor_dec,
  [sym_datatype_dec] = sym_datatype_dec,
  [sym_function_def] = sym_function_def,
  [sym_prop_literal] = sym_prop_literal,
  [sym_b_value] = sym_b_value,
  [sym_option] = sym_option,
  [sym_info_flag] = sym_info_flag,
  [sym_command] = sym_command,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_s_expr_repeat1] = aux_sym_s_expr_repeat1,
  [aux_sym_identifier_repeat1] = aux_sym_identifier_repeat1,
  [aux_sym_sort_repeat1] = aux_sym_sort_repeat1,
  [aux_sym_pattern_repeat1] = aux_sym_pattern_repeat1,
  [aux_sym_term_repeat1] = aux_sym_term_repeat1,
  [aux_sym_term_repeat2] = aux_sym_term_repeat2,
  [aux_sym_term_repeat3] = aux_sym_term_repeat3,
  [aux_sym_term_repeat4] = aux_sym_term_repeat4,
  [aux_sym_term_repeat5] = aux_sym_term_repeat5,
  [aux_sym_constructor_dec_repeat1] = aux_sym_constructor_dec_repeat1,
  [aux_sym_datatype_dec_repeat1] = aux_sym_datatype_dec_repeat1,
  [aux_sym_command_repeat1] = aux_sym_command_repeat1,
  [aux_sym_command_repeat2] = aux_sym_command_repeat2,
  [aux_sym_command_repeat3] = aux_sym_command_repeat3,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_0] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_numeral_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_decimal_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUNDx] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_hexadecimal_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUNDb] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_binary_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BINARY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DECIMAL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HEXADECIMAL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NUMERAL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STRING] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exists] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_forall] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_match] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_par] = {
    .visible = true,
    .named = false,
  },
  [sym_simple_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_symbol] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_theory] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_logic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONdiagnostic_DASHoutput_DASHchannel] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONglobal_DASHdeclaration] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONinteractive_DASHmode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONprint_DASHsuccess] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONproduce_DASHassertions] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONproduce_DASHmodels] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONproduce_DASHproofs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONproduce_DASHunsat_DASHassumptions] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONproduce_DASHunsat_DASHcores] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONrandom_DASHseed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONregular_DASHoutput_DASHchannel] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONreproducible_DASHresource_DASHlimit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONverbosity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONall_DASHstatistics] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONassertion_DASHstack_DASHlevels] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONauthors] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONerror_DASHbehavior] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONname] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONreason_DASHunknown] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONversion] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_assert] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_check_DASHsat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_check_DASHsat_DASHassuming] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_declare_DASHconst] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_declare_DASHdatatype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_declare_DASHdatatypes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_declare_DASHfun] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_declare_DASHsort] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_define_DASHfun] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_define_DASHfun_DASHrec] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_define_DASHsort] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_echo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_get_DASHassertions] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_get_DASHassignment] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_get_DASHinfo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_get_DASHmodel] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_get_DASHoption] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_get_DASHproof] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_get_DASHunsat_DASHassumptions] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_get_DASHunsat_DASHcore] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_get_DASHvalue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_push] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reset_DASHassertions] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set_DASHinfo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set_DASHlogic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set_DASHoption] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_numeral] = {
    .visible = true,
    .named = true,
  },
  [sym_decimal] = {
    .visible = true,
    .named = true,
  },
  [sym_hexadecimal] = {
    .visible = true,
    .named = true,
  },
  [sym_binary] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_reserved] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_index] = {
    .visible = true,
    .named = true,
  },
  [sym_spec_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_s_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_sort] = {
    .visible = true,
    .named = true,
  },
  [sym_qual_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_var_binding] = {
    .visible = true,
    .named = true,
  },
  [sym_sorted_var] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_match_case] = {
    .visible = true,
    .named = true,
  },
  [sym_term] = {
    .visible = true,
    .named = true,
  },
  [sym_sort_dec] = {
    .visible = true,
    .named = true,
  },
  [sym_selector_dec] = {
    .visible = true,
    .named = true,
  },
  [sym_constructor_dec] = {
    .visible = true,
    .named = true,
  },
  [sym_datatype_dec] = {
    .visible = true,
    .named = true,
  },
  [sym_function_def] = {
    .visible = true,
    .named = true,
  },
  [sym_prop_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_b_value] = {
    .visible = true,
    .named = true,
  },
  [sym_option] = {
    .visible = true,
    .named = true,
  },
  [sym_info_flag] = {
    .visible = true,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_s_expr_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sort_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pattern_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_term_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_term_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_term_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_term_repeat4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_term_repeat5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_constructor_dec_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_datatype_dec_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_repeat3] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 9,
  [43] = 18,
  [44] = 8,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 16,
  [50] = 17,
  [51] = 19,
  [52] = 14,
  [53] = 15,
  [54] = 54,
  [55] = 55,
  [56] = 12,
  [57] = 54,
  [58] = 58,
  [59] = 59,
  [60] = 59,
  [61] = 61,
  [62] = 62,
  [63] = 62,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 69,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 77,
  [82] = 82,
  [83] = 83,
  [84] = 77,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 12,
  [93] = 93,
  [94] = 8,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 9,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 64,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 38,
  [118] = 118,
  [119] = 119,
  [120] = 39,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 66,
  [125] = 125,
  [126] = 8,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 130,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 12,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 208,
  [220] = 207,
  [221] = 184,
  [222] = 201,
  [223] = 204,
  [224] = 224,
  [225] = 225,
  [226] = 206,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
};

static inline bool sym_simple_symbol_character_set_1(int32_t c) {
  return (c < '-'
    ? (c < '&'
      ? (c < '$'
        ? c == '!'
        : c <= '$')
      : (c <= '&' || (c >= '*' && c <= '+')))
    : (c <= '9' || (c < 'a'
      ? (c < '^'
        ? (c >= '<' && c <= 'Z')
        : c <= '_')
      : (c <= 'z' || c == '~'))));
}

static inline bool sym_simple_symbol_character_set_2(int32_t c) {
  return (c < '-'
    ? (c < '&'
      ? (c < '$'
        ? c == '!'
        : c <= '$')
      : (c <= '&' || (c >= '*' && c <= '+')))
    : (c <= '9' || (c < 'a'
      ? (c < '^'
        ? (c >= '<' && c <= 'Z')
        : c <= '^')
      : (c <= 'z' || c == '~'))));
}

static inline bool sym_simple_symbol_character_set_3(int32_t c) {
  return (c < '-'
    ? (c < '&'
      ? (c < '$'
        ? c == '!'
        : c <= '$')
      : (c <= '&' || (c >= '*' && c <= '+')))
    : (c <= '/' || (c < 'a'
      ? (c < '^'
        ? (c >= '<' && c <= 'Z')
        : c <= '_')
      : (c <= 'z' || c == '~'))));
}

static inline bool sym_simple_symbol_character_set_4(int32_t c) {
  return (c < '-'
    ? (c < '&'
      ? (c < '$'
        ? c == '!'
        : c <= '$')
      : (c <= '&' || (c >= '*' && c <= '+')))
    : (c <= '9' || (c < 'b'
      ? (c < '^'
        ? (c >= '<' && c <= 'Z')
        : c <= '_')
      : (c <= 'z' || c == '~'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(489);
      if (lookahead == '!') ADVANCE(519);
      if (lookahead == '"') ADVANCE(504);
      if (lookahead == '#') ADVANCE(98);
      if (lookahead == '(') ADVANCE(591);
      if (lookahead == ')') ADVANCE(592);
      if (lookahead == '.') ADVANCE(497);
      if (lookahead == '0') ADVANCE(493);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == ';') ADVANCE(490);
      if (lookahead == 'B') ADVANCE(46);
      if (lookahead == 'D') ADVANCE(41);
      if (lookahead == 'H') ADVANCE(42);
      if (lookahead == 'N') ADVANCE(62);
      if (lookahead == 'S') ADVANCE(61);
      if (lookahead == '_') ADVANCE(517);
      if (lookahead == 'a') ADVANCE(371);
      if (lookahead == 'c') ADVANCE(193);
      if (lookahead == 'd') ADVANCE(133);
      if (lookahead == 'e') ADVANCE(108);
      if (lookahead == 'f') ADVANCE(66);
      if (lookahead == 'g') ADVANCE(134);
      if (lookahead == 'l') ADVANCE(143);
      if (lookahead == 'm') ADVANCE(71);
      if (lookahead == 'n') ADVANCE(300);
      if (lookahead == 'p') ADVANCE(74);
      if (lookahead == 'r') ADVANCE(144);
      if (lookahead == 's') ADVANCE(167);
      if (lookahead == 't') ADVANCE(194);
      if (lookahead == '|') ADVANCE(488);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(495);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(520);
      if (lookahead == '"') ADVANCE(504);
      if (lookahead == '#') ADVANCE(98);
      if (lookahead == '(') ADVANCE(591);
      if (lookahead == ')') ADVANCE(592);
      if (lookahead == '.') ADVANCE(498);
      if (lookahead == '0') ADVANCE(494);
      if (lookahead == ':') ADVANCE(587);
      if (lookahead == 'B') ADVANCE(547);
      if (lookahead == 'D') ADVANCE(542);
      if (lookahead == 'H') ADVANCE(543);
      if (lookahead == 'N') ADVANCE(563);
      if (lookahead == 'S') ADVANCE(562);
      if (lookahead == '_') ADVANCE(518);
      if (lookahead == 'a') ADVANCE(578);
      if (lookahead == 'e') ADVANCE(584);
      if (lookahead == 'f') ADVANCE(575);
      if (lookahead == 'l') ADVANCE(570);
      if (lookahead == 'm') ADVANCE(568);
      if (lookahead == 'p') ADVANCE(567);
      if (lookahead == '|') ADVANCE(488);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(496);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(585);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(520);
      if (lookahead == '"') ADVANCE(504);
      if (lookahead == '#') ADVANCE(98);
      if (lookahead == '(') ADVANCE(591);
      if (lookahead == ')') ADVANCE(592);
      if (lookahead == '0') ADVANCE(494);
      if (lookahead == ':') ADVANCE(587);
      if (lookahead == 'B') ADVANCE(547);
      if (lookahead == 'D') ADVANCE(542);
      if (lookahead == 'H') ADVANCE(543);
      if (lookahead == 'N') ADVANCE(563);
      if (lookahead == 'S') ADVANCE(562);
      if (lookahead == '_') ADVANCE(518);
      if (lookahead == 'a') ADVANCE(578);
      if (lookahead == 'e') ADVANCE(584);
      if (lookahead == 'f') ADVANCE(575);
      if (lookahead == 'l') ADVANCE(570);
      if (lookahead == 'm') ADVANCE(568);
      if (lookahead == 'p') ADVANCE(567);
      if (lookahead == '|') ADVANCE(488);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(496);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(585);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(520);
      if (lookahead == '(') ADVANCE(591);
      if (lookahead == ':') ADVANCE(589);
      if (lookahead == '_') ADVANCE(518);
      if (lookahead == 'a') ADVANCE(578);
      if (lookahead == 'e') ADVANCE(584);
      if (lookahead == 'f') ADVANCE(575);
      if (lookahead == 'l') ADVANCE(570);
      if (lookahead == 'm') ADVANCE(568);
      if (lookahead == '|') ADVANCE(488);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(585);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(504);
      if (lookahead == '#') ADVANCE(98);
      if (lookahead == '(') ADVANCE(591);
      if (lookahead == ')') ADVANCE(592);
      if (lookahead == '.') ADVANCE(498);
      if (lookahead == '0') ADVANCE(494);
      if (lookahead == '|') ADVANCE(488);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(496);
      if (('!' <= lookahead && lookahead <= '$') ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(585);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(504);
      if (lookahead == '#') ADVANCE(98);
      if (lookahead == '(') ADVANCE(591);
      if (lookahead == ')') ADVANCE(592);
      if (lookahead == '0') ADVANCE(494);
      if (lookahead == ':') ADVANCE(587);
      if (lookahead == '|') ADVANCE(488);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(496);
      if (('!' <= lookahead && lookahead <= '$') ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(585);
      END_STATE();
    case 6:
      if (lookahead == '(') ADVANCE(591);
      if (lookahead == ')') ADVANCE(592);
      if (lookahead == '.') ADVANCE(497);
      if (lookahead == ':') ADVANCE(587);
      if (lookahead == '_') ADVANCE(517);
      if (lookahead == 'a') ADVANCE(386);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(591);
      if (lookahead == ')') ADVANCE(592);
      if (lookahead == ':') ADVANCE(587);
      if (lookahead == '|') ADVANCE(488);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (sym_simple_symbol_character_set_1(lookahead)) ADVANCE(585);
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(591);
      if (lookahead == '_') ADVANCE(518);
      if (lookahead == '|') ADVANCE(488);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (sym_simple_symbol_character_set_2(lookahead)) ADVANCE(585);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(77);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(214);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(183);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(121);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(97);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(89);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(103);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(254);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(468);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(396);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(407);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(240);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(408);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(301);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(120);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(129);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(244);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(404);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(402);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(362);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(96);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(123);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(331);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(590);
      if (lookahead == 'a') ADVANCE(412);
      if (lookahead == 'c') ADVANCE(193);
      if (lookahead == 'd') ADVANCE(133);
      if (lookahead == 'e') ADVANCE(109);
      if (lookahead == 'g') ADVANCE(134);
      if (lookahead == 'p') ADVANCE(290);
      if (lookahead == 'r') ADVANCE(144);
      if (lookahead == 's') ADVANCE(167);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(503);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      END_STATE();
    case 33:
      if (lookahead == 'A') ADVANCE(40);
      END_STATE();
    case 34:
      if (lookahead == 'A') ADVANCE(50);
      END_STATE();
    case 35:
      if (lookahead == 'A') ADVANCE(58);
      END_STATE();
    case 36:
      if (lookahead == 'A') ADVANCE(51);
      END_STATE();
    case 37:
      if (lookahead == 'A') ADVANCE(52);
      END_STATE();
    case 38:
      if (lookahead == 'C') ADVANCE(48);
      END_STATE();
    case 39:
      if (lookahead == 'C') ADVANCE(49);
      END_STATE();
    case 40:
      if (lookahead == 'D') ADVANCE(44);
      END_STATE();
    case 41:
      if (lookahead == 'E') ADVANCE(38);
      END_STATE();
    case 42:
      if (lookahead == 'E') ADVANCE(63);
      END_STATE();
    case 43:
      if (lookahead == 'E') ADVANCE(59);
      END_STATE();
    case 44:
      if (lookahead == 'E') ADVANCE(39);
      END_STATE();
    case 45:
      if (lookahead == 'G') ADVANCE(515);
      END_STATE();
    case 46:
      if (lookahead == 'I') ADVANCE(56);
      END_STATE();
    case 47:
      if (lookahead == 'I') ADVANCE(57);
      END_STATE();
    case 48:
      if (lookahead == 'I') ADVANCE(54);
      END_STATE();
    case 49:
      if (lookahead == 'I') ADVANCE(55);
      END_STATE();
    case 50:
      if (lookahead == 'L') ADVANCE(509);
      END_STATE();
    case 51:
      if (lookahead == 'L') ADVANCE(513);
      END_STATE();
    case 52:
      if (lookahead == 'L') ADVANCE(511);
      END_STATE();
    case 53:
      if (lookahead == 'M') ADVANCE(43);
      END_STATE();
    case 54:
      if (lookahead == 'M') ADVANCE(34);
      END_STATE();
    case 55:
      if (lookahead == 'M') ADVANCE(37);
      END_STATE();
    case 56:
      if (lookahead == 'N') ADVANCE(35);
      END_STATE();
    case 57:
      if (lookahead == 'N') ADVANCE(45);
      END_STATE();
    case 58:
      if (lookahead == 'R') ADVANCE(64);
      END_STATE();
    case 59:
      if (lookahead == 'R') ADVANCE(36);
      END_STATE();
    case 60:
      if (lookahead == 'R') ADVANCE(47);
      END_STATE();
    case 61:
      if (lookahead == 'T') ADVANCE(60);
      END_STATE();
    case 62:
      if (lookahead == 'U') ADVANCE(53);
      END_STATE();
    case 63:
      if (lookahead == 'X') ADVANCE(33);
      END_STATE();
    case 64:
      if (lookahead == 'Y') ADVANCE(507);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(250);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(247);
      if (lookahead == 'o') ADVANCE(345);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(265);
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(265);
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(187);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(479);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(432);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(389);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(389);
      if (lookahead == 'g') ADVANCE(475);
      if (lookahead == 'p') ADVANCE(350);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(341);
      if (lookahead == 'o') ADVANCE(332);
      if (lookahead == 'u') ADVANCE(387);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(238);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(114);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(395);
      if (lookahead == 'i') ADVANCE(257);
      if (lookahead == 'm') ADVANCE(298);
      if (lookahead == 'o') ADVANCE(335);
      if (lookahead == 'p') ADVANCE(355);
      if (lookahead == 'u') ADVANCE(288);
      if (lookahead == 'v') ADVANCE(78);
      END_STATE();
    case 78:
      if (lookahead == 'a') ADVANCE(245);
      END_STATE();
    case 79:
      if (lookahead == 'a') ADVANCE(356);
      END_STATE();
    case 80:
      if (lookahead == 'a') ADVANCE(438);
      END_STATE();
    case 81:
      if (lookahead == 'a') ADVANCE(415);
      END_STATE();
    case 82:
      if (lookahead == 'a') ADVANCE(354);
      END_STATE();
    case 83:
      if (lookahead == 'a') ADVANCE(367);
      END_STATE();
    case 84:
      if (lookahead == 'a') ADVANCE(426);
      END_STATE();
    case 85:
      if (lookahead == 'a') ADVANCE(283);
      END_STATE();
    case 86:
      if (lookahead == 'a') ADVANCE(436);
      END_STATE();
    case 87:
      if (lookahead == 'a') ADVANCE(239);
      END_STATE();
    case 88:
      if (lookahead == 'a') ADVANCE(399);
      END_STATE();
    case 89:
      if (lookahead == 'a') ADVANCE(400);
      if (lookahead == 'c') ADVANCE(323);
      END_STATE();
    case 90:
      if (lookahead == 'a') ADVANCE(442);
      END_STATE();
    case 91:
      if (lookahead == 'a') ADVANCE(118);
      END_STATE();
    case 92:
      if (lookahead == 'a') ADVANCE(449);
      END_STATE();
    case 93:
      if (lookahead == 'a') ADVANCE(285);
      END_STATE();
    case 94:
      if (lookahead == 'a') ADVANCE(451);
      END_STATE();
    case 95:
      if (lookahead == 'a') ADVANCE(457);
      END_STATE();
    case 96:
      if (lookahead == 'a') ADVANCE(417);
      if (lookahead == 'c') ADVANCE(328);
      END_STATE();
    case 97:
      if (lookahead == 'a') ADVANCE(419);
      if (lookahead == 'm') ADVANCE(320);
      if (lookahead == 'p') ADVANCE(365);
      if (lookahead == 'u') ADVANCE(289);
      END_STATE();
    case 98:
      if (lookahead == 'b') ADVANCE(502);
      if (lookahead == 'x') ADVANCE(500);
      END_STATE();
    case 99:
      if (lookahead == 'b') ADVANCE(87);
      END_STATE();
    case 100:
      if (lookahead == 'b') ADVANCE(303);
      END_STATE();
    case 101:
      if (lookahead == 'b') ADVANCE(303);
      if (lookahead == 's') ADVANCE(215);
      END_STATE();
    case 102:
      if (lookahead == 'b') ADVANCE(243);
      END_STATE();
    case 103:
      if (lookahead == 'b') ADVANCE(147);
      END_STATE();
    case 104:
      if (lookahead == 'c') ADVANCE(228);
      END_STATE();
    case 105:
      if (lookahead == 'c') ADVANCE(594);
      END_STATE();
    case 106:
      if (lookahead == 'c') ADVANCE(645);
      END_STATE();
    case 107:
      if (lookahead == 'c') ADVANCE(627);
      END_STATE();
    case 108:
      if (lookahead == 'c') ADVANCE(192);
      if (lookahead == 'x') ADVANCE(199);
      END_STATE();
    case 109:
      if (lookahead == 'c') ADVANCE(192);
      if (lookahead == 'x') ADVANCE(212);
      END_STATE();
    case 110:
      if (lookahead == 'c') ADVANCE(191);
      END_STATE();
    case 111:
      if (lookahead == 'c') ADVANCE(237);
      if (lookahead == 'f') ADVANCE(202);
      END_STATE();
    case 112:
      if (lookahead == 'c') ADVANCE(204);
      END_STATE();
    case 113:
      if (lookahead == 'c') ADVANCE(156);
      END_STATE();
    case 114:
      if (lookahead == 'c') ADVANCE(440);
      END_STATE();
    case 115:
      if (lookahead == 'c') ADVANCE(377);
      END_STATE();
    case 116:
      if (lookahead == 'c') ADVANCE(175);
      END_STATE();
    case 117:
      if (lookahead == 'c') ADVANCE(162);
      END_STATE();
    case 118:
      if (lookahead == 'c') ADVANCE(227);
      END_STATE();
    case 119:
      if (lookahead == 'c') ADVANCE(116);
      END_STATE();
    case 120:
      if (lookahead == 'c') ADVANCE(196);
      END_STATE();
    case 121:
      if (lookahead == 'c') ADVANCE(313);
      if (lookahead == 'd') ADVANCE(92);
      if (lookahead == 'f') ADVANCE(470);
      if (lookahead == 's') ADVANCE(326);
      END_STATE();
    case 122:
      if (lookahead == 'c') ADVANCE(248);
      END_STATE();
    case 123:
      if (lookahead == 'c') ADVANCE(198);
      END_STATE();
    case 124:
      if (lookahead == 'c') ADVANCE(31);
      END_STATE();
    case 125:
      if (lookahead == 'd') ADVANCE(607);
      END_STATE();
    case 126:
      if (lookahead == 'd') ADVANCE(463);
      END_STATE();
    case 127:
      if (lookahead == 'd') ADVANCE(296);
      END_STATE();
    case 128:
      if (lookahead == 'd') ADVANCE(151);
      END_STATE();
    case 129:
      if (lookahead == 'd') ADVANCE(155);
      END_STATE();
    case 130:
      if (lookahead == 'd') ADVANCE(169);
      END_STATE();
    case 131:
      if (lookahead == 'd') ADVANCE(142);
      END_STATE();
    case 132:
      if (lookahead == 'd') ADVANCE(465);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(420);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 136:
      if (lookahead == 'e') ADVANCE(596);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(615);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(597);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(639);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(638);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(622);
      END_STATE();
    case 142:
      if (lookahead == 'e') ADVANCE(600);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(421);
      if (lookahead == 'o') ADVANCE(186);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(391);
      END_STATE();
    case 145:
      if (lookahead == 'e') ADVANCE(305);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 149:
      if (lookahead == 'e') ADVANCE(342);
      END_STATE();
    case 150:
      if (lookahead == 'e') ADVANCE(351);
      END_STATE();
    case 151:
      if (lookahead == 'e') ADVANCE(231);
      END_STATE();
    case 152:
      if (lookahead == 'e') ADVANCE(424);
      END_STATE();
    case 153:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 154:
      if (lookahead == 'e') ADVANCE(232);
      END_STATE();
    case 155:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 156:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 157:
      if (lookahead == 'e') ADVANCE(233);
      END_STATE();
    case 158:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 159:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 160:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 161:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 162:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 163:
      if (lookahead == 'e') ADVANCE(347);
      END_STATE();
    case 164:
      if (lookahead == 'e') ADVANCE(360);
      END_STATE();
    case 165:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 166:
      if (lookahead == 'e') ADVANCE(382);
      END_STATE();
    case 167:
      if (lookahead == 'e') ADVANCE(433);
      END_STATE();
    case 168:
      if (lookahead == 'e') ADVANCE(481);
      END_STATE();
    case 169:
      if (lookahead == 'e') ADVANCE(241);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(349);
      END_STATE();
    case 171:
      if (lookahead == 'e') ADVANCE(403);
      END_STATE();
    case 172:
      if (lookahead == 'e') ADVANCE(353);
      END_STATE();
    case 173:
      if (lookahead == 'e') ADVANCE(276);
      END_STATE();
    case 174:
      if (lookahead == 'e') ADVANCE(242);
      END_STATE();
    case 175:
      if (lookahead == 'e') ADVANCE(401);
      END_STATE();
    case 176:
      if (lookahead == 'e') ADVANCE(368);
      if (lookahead == 'i') ADVANCE(189);
      END_STATE();
    case 177:
      if (lookahead == 'e') ADVANCE(369);
      END_STATE();
    case 178:
      if (lookahead == 'e') ADVANCE(370);
      END_STATE();
    case 179:
      if (lookahead == 'f') ADVANCE(636);
      END_STATE();
    case 180:
      if (lookahead == 'f') ADVANCE(293);
      END_STATE();
    case 181:
      if (lookahead == 'f') ADVANCE(294);
      END_STATE();
    case 182:
      if (lookahead == 'f') ADVANCE(379);
      END_STATE();
    case 183:
      if (lookahead == 'f') ADVANCE(469);
      if (lookahead == 's') ADVANCE(322);
      END_STATE();
    case 184:
      if (lookahead == 'g') ADVANCE(620);
      END_STATE();
    case 185:
      if (lookahead == 'g') ADVANCE(475);
      if (lookahead == 'p') ADVANCE(350);
      END_STATE();
    case 186:
      if (lookahead == 'g') ADVANCE(203);
      END_STATE();
    case 187:
      if (lookahead == 'g') ADVANCE(270);
      END_STATE();
    case 188:
      if (lookahead == 'g') ADVANCE(206);
      END_STATE();
    case 189:
      if (lookahead == 'g') ADVANCE(281);
      END_STATE();
    case 190:
      if (lookahead == 'h') ADVANCE(641);
      END_STATE();
    case 191:
      if (lookahead == 'h') ADVANCE(530);
      END_STATE();
    case 192:
      if (lookahead == 'h') ADVANCE(292);
      END_STATE();
    case 193:
      if (lookahead == 'h') ADVANCE(135);
      END_STATE();
    case 194:
      if (lookahead == 'h') ADVANCE(145);
      if (lookahead == 'r') ADVANCE(466);
      END_STATE();
    case 195:
      if (lookahead == 'h') ADVANCE(70);
      END_STATE();
    case 196:
      if (lookahead == 'h') ADVANCE(85);
      END_STATE();
    case 197:
      if (lookahead == 'h') ADVANCE(309);
      END_STATE();
    case 198:
      if (lookahead == 'h') ADVANCE(93);
      END_STATE();
    case 199:
      if (lookahead == 'i') ADVANCE(392);
      END_STATE();
    case 200:
      if (lookahead == 'i') ADVANCE(480);
      END_STATE();
    case 201:
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 202:
      if (lookahead == 'i') ADVANCE(271);
      END_STATE();
    case 203:
      if (lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 204:
      if (lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 205:
      if (lookahead == 'i') ADVANCE(253);
      END_STATE();
    case 206:
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 207:
      if (lookahead == 'i') ADVANCE(124);
      END_STATE();
    case 208:
      if (lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 209:
      if (lookahead == 'i') ADVANCE(434);
      END_STATE();
    case 210:
      if (lookahead == 'i') ADVANCE(267);
      END_STATE();
    case 211:
      if (lookahead == 'i') ADVANCE(431);
      END_STATE();
    case 212:
      if (lookahead == 'i') ADVANCE(423);
      END_STATE();
    case 213:
      if (lookahead == 'i') ADVANCE(284);
      if (lookahead == 'o') ADVANCE(126);
      END_STATE();
    case 214:
      if (lookahead == 'i') ADVANCE(282);
      if (lookahead == 'l') ADVANCE(317);
      if (lookahead == 'o') ADVANCE(336);
      END_STATE();
    case 215:
      if (lookahead == 'i') ADVANCE(304);
      END_STATE();
    case 216:
      if (lookahead == 'i') ADVANCE(306);
      END_STATE();
    case 217:
      if (lookahead == 'i') ADVANCE(310);
      END_STATE();
    case 218:
      if (lookahead == 'i') ADVANCE(312);
      END_STATE();
    case 219:
      if (lookahead == 'i') ADVANCE(314);
      END_STATE();
    case 220:
      if (lookahead == 'i') ADVANCE(319);
      END_STATE();
    case 221:
      if (lookahead == 'i') ADVANCE(321);
      END_STATE();
    case 222:
      if (lookahead == 'i') ADVANCE(325);
      END_STATE();
    case 223:
      if (lookahead == 'i') ADVANCE(316);
      END_STATE();
    case 224:
      if (lookahead == 'i') ADVANCE(327);
      END_STATE();
    case 225:
      if (lookahead == 'i') ADVANCE(329);
      END_STATE();
    case 226:
      if (lookahead == 'i') ADVANCE(411);
      END_STATE();
    case 227:
      if (lookahead == 'k') ADVANCE(25);
      END_STATE();
    case 228:
      if (lookahead == 'k') ADVANCE(19);
      END_STATE();
    case 229:
      if (lookahead == 'k') ADVANCE(273);
      END_STATE();
    case 230:
      if (lookahead == 'l') ADVANCE(528);
      END_STATE();
    case 231:
      if (lookahead == 'l') ADVANCE(634);
      END_STATE();
    case 232:
      if (lookahead == 'l') ADVANCE(608);
      END_STATE();
    case 233:
      if (lookahead == 'l') ADVANCE(598);
      END_STATE();
    case 234:
      if (lookahead == 'l') ADVANCE(291);
      END_STATE();
    case 235:
      if (lookahead == 'l') ADVANCE(236);
      if (lookahead == 's') ADVANCE(409);
      if (lookahead == 'u') ADVANCE(445);
      END_STATE();
    case 236:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 237:
      if (lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 238:
      if (lookahead == 'l') ADVANCE(230);
      END_STATE();
    case 239:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 240:
      if (lookahead == 'l') ADVANCE(205);
      END_STATE();
    case 241:
      if (lookahead == 'l') ADVANCE(378);
      END_STATE();
    case 242:
      if (lookahead == 'l') ADVANCE(384);
      END_STATE();
    case 243:
      if (lookahead == 'l') ADVANCE(161);
      END_STATE();
    case 244:
      if (lookahead == 'l') ADVANCE(168);
      END_STATE();
    case 245:
      if (lookahead == 'l') ADVANCE(471);
      END_STATE();
    case 246:
      if (lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 247:
      if (lookahead == 'l') ADVANCE(397);
      END_STATE();
    case 248:
      if (lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 249:
      if (lookahead == 'm') ADVANCE(27);
      END_STATE();
    case 250:
      if (lookahead == 'm') ADVANCE(137);
      END_STATE();
    case 251:
      if (lookahead == 'm') ADVANCE(173);
      END_STATE();
    case 252:
      if (lookahead == 'm') ADVANCE(210);
      END_STATE();
    case 253:
      if (lookahead == 'm') ADVANCE(211);
      END_STATE();
    case 254:
      if (lookahead == 'm') ADVANCE(324);
      END_STATE();
    case 255:
      if (lookahead == 'm') ADVANCE(337);
      END_STATE();
    case 256:
      if (lookahead == 'm') ADVANCE(338);
      END_STATE();
    case 257:
      if (lookahead == 'n') ADVANCE(180);
      END_STATE();
    case 258:
      if (lookahead == 'n') ADVANCE(617);
      END_STATE();
    case 259:
      if (lookahead == 'n') ADVANCE(626);
      END_STATE();
    case 260:
      if (lookahead == 'n') ADVANCE(635);
      END_STATE();
    case 261:
      if (lookahead == 'n') ADVANCE(646);
      END_STATE();
    case 262:
      if (lookahead == 'n') ADVANCE(624);
      END_STATE();
    case 263:
      if (lookahead == 'n') ADVANCE(616);
      END_STATE();
    case 264:
      if (lookahead == 'n') ADVANCE(599);
      END_STATE();
    case 265:
      if (lookahead == 'n') ADVANCE(127);
      END_STATE();
    case 266:
      if (lookahead == 'n') ADVANCE(229);
      END_STATE();
    case 267:
      if (lookahead == 'n') ADVANCE(184);
      END_STATE();
    case 268:
      if (lookahead == 'n') ADVANCE(439);
      END_STATE();
    case 269:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 270:
      if (lookahead == 'n') ADVANCE(318);
      END_STATE();
    case 271:
      if (lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 272:
      if (lookahead == 'n') ADVANCE(376);
      END_STATE();
    case 273:
      if (lookahead == 'n') ADVANCE(295);
      END_STATE();
    case 274:
      if (lookahead == 'n') ADVANCE(380);
      END_STATE();
    case 275:
      if (lookahead == 'n') ADVANCE(381);
      END_STATE();
    case 276:
      if (lookahead == 'n') ADVANCE(430);
      END_STATE();
    case 277:
      if (lookahead == 'n') ADVANCE(383);
      END_STATE();
    case 278:
      if (lookahead == 'n') ADVANCE(385);
      END_STATE();
    case 279:
      if (lookahead == 'n') ADVANCE(154);
      END_STATE();
    case 280:
      if (lookahead == 'n') ADVANCE(157);
      END_STATE();
    case 281:
      if (lookahead == 'n') ADVANCE(251);
      END_STATE();
    case 282:
      if (lookahead == 'n') ADVANCE(181);
      END_STATE();
    case 283:
      if (lookahead == 'n') ADVANCE(279);
      END_STATE();
    case 284:
      if (lookahead == 'n') ADVANCE(447);
      END_STATE();
    case 285:
      if (lookahead == 'n') ADVANCE(280);
      END_STATE();
    case 286:
      if (lookahead == 'n') ADVANCE(405);
      END_STATE();
    case 287:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 288:
      if (lookahead == 'n') ADVANCE(410);
      END_STATE();
    case 289:
      if (lookahead == 'n') ADVANCE(414);
      END_STATE();
    case 290:
      if (lookahead == 'o') ADVANCE(332);
      if (lookahead == 'u') ADVANCE(387);
      END_STATE();
    case 291:
      if (lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 292:
      if (lookahead == 'o') ADVANCE(629);
      END_STATE();
    case 293:
      if (lookahead == 'o') ADVANCE(633);
      END_STATE();
    case 294:
      if (lookahead == 'o') ADVANCE(644);
      END_STATE();
    case 295:
      if (lookahead == 'o') ADVANCE(482);
      END_STATE();
    case 296:
      if (lookahead == 'o') ADVANCE(249);
      END_STATE();
    case 297:
      if (lookahead == 'o') ADVANCE(179);
      END_STATE();
    case 298:
      if (lookahead == 'o') ADVANCE(128);
      END_STATE();
    case 299:
      if (lookahead == 'o') ADVANCE(182);
      END_STATE();
    case 300:
      if (lookahead == 'o') ADVANCE(422);
      END_STATE();
    case 301:
      if (lookahead == 'o') ADVANCE(473);
      END_STATE();
    case 302:
      if (lookahead == 'o') ADVANCE(269);
      END_STATE();
    case 303:
      if (lookahead == 'o') ADVANCE(390);
      END_STATE();
    case 304:
      if (lookahead == 'o') ADVANCE(258);
      END_STATE();
    case 305:
      if (lookahead == 'o') ADVANCE(343);
      END_STATE();
    case 306:
      if (lookahead == 'o') ADVANCE(287);
      END_STATE();
    case 307:
      if (lookahead == 'o') ADVANCE(472);
      END_STATE();
    case 308:
      if (lookahead == 'o') ADVANCE(346);
      END_STATE();
    case 309:
      if (lookahead == 'o') ADVANCE(352);
      END_STATE();
    case 310:
      if (lookahead == 'o') ADVANCE(260);
      END_STATE();
    case 311:
      if (lookahead == 'o') ADVANCE(297);
      END_STATE();
    case 312:
      if (lookahead == 'o') ADVANCE(261);
      END_STATE();
    case 313:
      if (lookahead == 'o') ADVANCE(286);
      END_STATE();
    case 314:
      if (lookahead == 'o') ADVANCE(344);
      END_STATE();
    case 315:
      if (lookahead == 'o') ADVANCE(299);
      END_STATE();
    case 316:
      if (lookahead == 'o') ADVANCE(264);
      END_STATE();
    case 317:
      if (lookahead == 'o') ADVANCE(188);
      END_STATE();
    case 318:
      if (lookahead == 'o') ADVANCE(398);
      END_STATE();
    case 319:
      if (lookahead == 'o') ADVANCE(272);
      END_STATE();
    case 320:
      if (lookahead == 'o') ADVANCE(130);
      END_STATE();
    case 321:
      if (lookahead == 'o') ADVANCE(274);
      END_STATE();
    case 322:
      if (lookahead == 'o') ADVANCE(357);
      END_STATE();
    case 323:
      if (lookahead == 'o') ADVANCE(361);
      END_STATE();
    case 324:
      if (lookahead == 'o') ADVANCE(131);
      END_STATE();
    case 325:
      if (lookahead == 'o') ADVANCE(275);
      END_STATE();
    case 326:
      if (lookahead == 'o') ADVANCE(358);
      END_STATE();
    case 327:
      if (lookahead == 'o') ADVANCE(277);
      END_STATE();
    case 328:
      if (lookahead == 'o') ADVANCE(363);
      END_STATE();
    case 329:
      if (lookahead == 'o') ADVANCE(278);
      END_STATE();
    case 330:
      if (lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 331:
      if (lookahead == 'o') ADVANCE(478);
      END_STATE();
    case 332:
      if (lookahead == 'p') ADVANCE(640);
      END_STATE();
    case 333:
      if (lookahead == 'p') ADVANCE(474);
      END_STATE();
    case 334:
      if (lookahead == 'p') ADVANCE(141);
      END_STATE();
    case 335:
      if (lookahead == 'p') ADVANCE(452);
      END_STATE();
    case 336:
      if (lookahead == 'p') ADVANCE(453);
      END_STATE();
    case 337:
      if (lookahead == 'p') ADVANCE(458);
      END_STATE();
    case 338:
      if (lookahead == 'p') ADVANCE(459);
      END_STATE();
    case 339:
      if (lookahead == 'p') ADVANCE(477);
      END_STATE();
    case 340:
      if (lookahead == 'r') ADVANCE(213);
      END_STATE();
    case 341:
      if (lookahead == 'r') ADVANCE(532);
      END_STATE();
    case 342:
      if (lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 343:
      if (lookahead == 'r') ADVANCE(483);
      END_STATE();
    case 344:
      if (lookahead == 'r') ADVANCE(614);
      END_STATE();
    case 345:
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 346:
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 347:
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 348:
      if (lookahead == 'r') ADVANCE(364);
      END_STATE();
    case 349:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 350:
      if (lookahead == 'r') ADVANCE(330);
      END_STATE();
    case 351:
      if (lookahead == 'r') ADVANCE(425);
      END_STATE();
    case 352:
      if (lookahead == 'r') ADVANCE(374);
      END_STATE();
    case 353:
      if (lookahead == 'r') ADVANCE(450);
      END_STATE();
    case 354:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 355:
      if (lookahead == 'r') ADVANCE(311);
      END_STATE();
    case 356:
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 357:
      if (lookahead == 'r') ADVANCE(427);
      END_STATE();
    case 358:
      if (lookahead == 'r') ADVANCE(428);
      END_STATE();
    case 359:
      if (lookahead == 'r') ADVANCE(158);
      END_STATE();
    case 360:
      if (lookahead == 'r') ADVANCE(388);
      END_STATE();
    case 361:
      if (lookahead == 'r') ADVANCE(140);
      END_STATE();
    case 362:
      if (lookahead == 'r') ADVANCE(171);
      END_STATE();
    case 363:
      if (lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 364:
      if (lookahead == 'r') ADVANCE(308);
      END_STATE();
    case 365:
      if (lookahead == 'r') ADVANCE(315);
      END_STATE();
    case 366:
      if (lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 367:
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 368:
      if (lookahead == 'r') ADVANCE(454);
      END_STATE();
    case 369:
      if (lookahead == 'r') ADVANCE(455);
      END_STATE();
    case 370:
      if (lookahead == 'r') ADVANCE(456);
      END_STATE();
    case 371:
      if (lookahead == 's') ADVANCE(522);
      END_STATE();
    case 372:
      if (lookahead == 's') ADVANCE(526);
      END_STATE();
    case 373:
      if (lookahead == 's') ADVANCE(176);
      END_STATE();
    case 374:
      if (lookahead == 's') ADVANCE(613);
      END_STATE();
    case 375:
      if (lookahead == 's') ADVANCE(601);
      END_STATE();
    case 376:
      if (lookahead == 's') ADVANCE(631);
      END_STATE();
    case 377:
      if (lookahead == 's') ADVANCE(611);
      END_STATE();
    case 378:
      if (lookahead == 's') ADVANCE(603);
      END_STATE();
    case 379:
      if (lookahead == 's') ADVANCE(604);
      END_STATE();
    case 380:
      if (lookahead == 's') ADVANCE(643);
      END_STATE();
    case 381:
      if (lookahead == 's') ADVANCE(602);
      END_STATE();
    case 382:
      if (lookahead == 's') ADVANCE(606);
      END_STATE();
    case 383:
      if (lookahead == 's') ADVANCE(637);
      END_STATE();
    case 384:
      if (lookahead == 's') ADVANCE(612);
      END_STATE();
    case 385:
      if (lookahead == 's') ADVANCE(605);
      END_STATE();
    case 386:
      if (lookahead == 's') ADVANCE(521);
      END_STATE();
    case 387:
      if (lookahead == 's') ADVANCE(190);
      END_STATE();
    case 388:
      if (lookahead == 's') ADVANCE(215);
      END_STATE();
    case 389:
      if (lookahead == 's') ADVANCE(302);
      END_STATE();
    case 390:
      if (lookahead == 's') ADVANCE(209);
      END_STATE();
    case 391:
      if (lookahead == 's') ADVANCE(152);
      END_STATE();
    case 392:
      if (lookahead == 's') ADVANCE(437);
      if (lookahead == 't') ADVANCE(630);
      END_STATE();
    case 393:
      if (lookahead == 's') ADVANCE(462);
      END_STATE();
    case 394:
      if (lookahead == 's') ADVANCE(464);
      END_STATE();
    case 395:
      if (lookahead == 's') ADVANCE(373);
      END_STATE();
    case 396:
      if (lookahead == 's') ADVANCE(444);
      END_STATE();
    case 397:
      if (lookahead == 's') ADVANCE(138);
      END_STATE();
    case 398:
      if (lookahead == 's') ADVANCE(446);
      END_STATE();
    case 399:
      if (lookahead == 's') ADVANCE(393);
      END_STATE();
    case 400:
      if (lookahead == 's') ADVANCE(394);
      END_STATE();
    case 401:
      if (lookahead == 's') ADVANCE(375);
      END_STATE();
    case 402:
      if (lookahead == 's') ADVANCE(165);
      END_STATE();
    case 403:
      if (lookahead == 's') ADVANCE(307);
      END_STATE();
    case 404:
      if (lookahead == 's') ADVANCE(441);
      END_STATE();
    case 405:
      if (lookahead == 's') ADVANCE(429);
      END_STATE();
    case 406:
      if (lookahead == 's') ADVANCE(150);
      END_STATE();
    case 407:
      if (lookahead == 's') ADVANCE(84);
      END_STATE();
    case 408:
      if (lookahead == 's') ADVANCE(467);
      END_STATE();
    case 409:
      if (lookahead == 's') ADVANCE(172);
      END_STATE();
    case 410:
      if (lookahead == 's') ADVANCE(90);
      END_STATE();
    case 411:
      if (lookahead == 's') ADVANCE(448);
      END_STATE();
    case 412:
      if (lookahead == 's') ADVANCE(406);
      END_STATE();
    case 413:
      if (lookahead == 's') ADVANCE(177);
      END_STATE();
    case 414:
      if (lookahead == 's') ADVANCE(94);
      END_STATE();
    case 415:
      if (lookahead == 's') ADVANCE(413);
      END_STATE();
    case 416:
      if (lookahead == 's') ADVANCE(476);
      END_STATE();
    case 417:
      if (lookahead == 's') ADVANCE(416);
      END_STATE();
    case 418:
      if (lookahead == 's') ADVANCE(178);
      END_STATE();
    case 419:
      if (lookahead == 's') ADVANCE(418);
      END_STATE();
    case 420:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 421:
      if (lookahead == 't') ADVANCE(524);
      END_STATE();
    case 422:
      if (lookahead == 't') ADVANCE(595);
      END_STATE();
    case 423:
      if (lookahead == 't') ADVANCE(630);
      END_STATE();
    case 424:
      if (lookahead == 't') ADVANCE(642);
      END_STATE();
    case 425:
      if (lookahead == 't') ADVANCE(618);
      END_STATE();
    case 426:
      if (lookahead == 't') ADVANCE(619);
      END_STATE();
    case 427:
      if (lookahead == 't') ADVANCE(628);
      END_STATE();
    case 428:
      if (lookahead == 't') ADVANCE(625);
      END_STATE();
    case 429:
      if (lookahead == 't') ADVANCE(621);
      END_STATE();
    case 430:
      if (lookahead == 't') ADVANCE(632);
      END_STATE();
    case 431:
      if (lookahead == 't') ADVANCE(609);
      END_STATE();
    case 432:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 433:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 434:
      if (lookahead == 't') ADVANCE(484);
      END_STATE();
    case 435:
      if (lookahead == 't') ADVANCE(333);
      END_STATE();
    case 436:
      if (lookahead == 't') ADVANCE(485);
      END_STATE();
    case 437:
      if (lookahead == 't') ADVANCE(372);
      END_STATE();
    case 438:
      if (lookahead == 't') ADVANCE(226);
      END_STATE();
    case 439:
      if (lookahead == 't') ADVANCE(170);
      END_STATE();
    case 440:
      if (lookahead == 't') ADVANCE(200);
      END_STATE();
    case 441:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 442:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 443:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 444:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 445:
      if (lookahead == 't') ADVANCE(197);
      END_STATE();
    case 446:
      if (lookahead == 't') ADVANCE(207);
      END_STATE();
    case 447:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 448:
      if (lookahead == 't') ADVANCE(208);
      END_STATE();
    case 449:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 450:
      if (lookahead == 't') ADVANCE(216);
      END_STATE();
    case 451:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 452:
      if (lookahead == 't') ADVANCE(217);
      END_STATE();
    case 453:
      if (lookahead == 't') ADVANCE(218);
      END_STATE();
    case 454:
      if (lookahead == 't') ADVANCE(220);
      END_STATE();
    case 455:
      if (lookahead == 't') ADVANCE(221);
      END_STATE();
    case 456:
      if (lookahead == 't') ADVANCE(222);
      END_STATE();
    case 457:
      if (lookahead == 't') ADVANCE(223);
      END_STATE();
    case 458:
      if (lookahead == 't') ADVANCE(224);
      END_STATE();
    case 459:
      if (lookahead == 't') ADVANCE(225);
      END_STATE();
    case 460:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 461:
      if (lookahead == 't') ADVANCE(339);
      END_STATE();
    case 462:
      if (lookahead == 'u') ADVANCE(252);
      END_STATE();
    case 463:
      if (lookahead == 'u') ADVANCE(113);
      END_STATE();
    case 464:
      if (lookahead == 'u') ADVANCE(255);
      END_STATE();
    case 465:
      if (lookahead == 'u') ADVANCE(112);
      END_STATE();
    case 466:
      if (lookahead == 'u') ADVANCE(136);
      END_STATE();
    case 467:
      if (lookahead == 'u') ADVANCE(119);
      END_STATE();
    case 468:
      if (lookahead == 'u') ADVANCE(266);
      END_STATE();
    case 469:
      if (lookahead == 'u') ADVANCE(259);
      END_STATE();
    case 470:
      if (lookahead == 'u') ADVANCE(262);
      END_STATE();
    case 471:
      if (lookahead == 'u') ADVANCE(139);
      END_STATE();
    case 472:
      if (lookahead == 'u') ADVANCE(366);
      END_STATE();
    case 473:
      if (lookahead == 'u') ADVANCE(435);
      END_STATE();
    case 474:
      if (lookahead == 'u') ADVANCE(443);
      END_STATE();
    case 475:
      if (lookahead == 'u') ADVANCE(246);
      END_STATE();
    case 476:
      if (lookahead == 'u') ADVANCE(256);
      END_STATE();
    case 477:
      if (lookahead == 'u') ADVANCE(460);
      END_STATE();
    case 478:
      if (lookahead == 'u') ADVANCE(461);
      END_STATE();
    case 479:
      if (lookahead == 'v') ADVANCE(219);
      END_STATE();
    case 480:
      if (lookahead == 'v') ADVANCE(160);
      END_STATE();
    case 481:
      if (lookahead == 'v') ADVANCE(174);
      END_STATE();
    case 482:
      if (lookahead == 'w') ADVANCE(263);
      END_STATE();
    case 483:
      if (lookahead == 'y') ADVANCE(593);
      END_STATE();
    case 484:
      if (lookahead == 'y') ADVANCE(610);
      END_STATE();
    case 485:
      if (lookahead == 'y') ADVANCE(334);
      END_STATE();
    case 486:
      if (lookahead == '|') ADVANCE(586);
      if ((' ' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '~') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(486);
      END_STATE();
    case 487:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(487)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(501);
      END_STATE();
    case 488:
      if ((' ' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '{') ||
          lookahead == '}' ||
          lookahead == '~' ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(486);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == ' ') ADVANCE(491);
      if (('!' <= lookahead && lookahead <= '~') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(492);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if ((' ' <= lookahead && lookahead <= '~') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(492);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_0);
      if (sym_simple_symbol_character_set_1(lookahead)) ADVANCE(585);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_numeral_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(495);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_numeral_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(496);
      if (sym_simple_symbol_character_set_3(lookahead)) ADVANCE(585);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (sym_simple_symbol_character_set_1(lookahead)) ADVANCE(585);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_decimal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_POUNDx);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_hexadecimal_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(501);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_POUNDb);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(503);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == ' ') ADVANCE(505);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_BINARY);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_BINARY);
      if (sym_simple_symbol_character_set_1(lookahead)) ADVANCE(585);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_DECIMAL);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_DECIMAL);
      if (sym_simple_symbol_character_set_1(lookahead)) ADVANCE(585);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_HEXADECIMAL);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_HEXADECIMAL);
      if (sym_simple_symbol_character_set_1(lookahead)) ADVANCE(585);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_NUMERAL);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_NUMERAL);
      if (sym_simple_symbol_character_set_1(lookahead)) ADVANCE(585);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_STRING);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_STRING);
      if (sym_simple_symbol_character_set_1(lookahead)) ADVANCE(585);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym__);
      if (sym_simple_symbol_character_set_1(lookahead)) ADVANCE(585);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (sym_simple_symbol_character_set_1(lookahead)) ADVANCE(585);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == 's') ADVANCE(150);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_as);
      if (sym_simple_symbol_character_set_1(lookahead)) ADVANCE(585);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_let);
      if (sym_simple_symbol_character_set_1(lookahead)) ADVANCE(585);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_exists);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_exists);
      if (sym_simple_symbol_character_set_1(lookahead)) ADVANCE(585);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_forall);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_forall);
      if (sym_simple_symbol_character_set_1(lookahead)) ADVANCE(585);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_match);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_match);
      if (sym_simple_symbol_character_set_1(lookahead)) ADVANCE(585);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_par);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_par);
      if (sym_simple_symbol_character_set_1(lookahead)) ADVANCE(585);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_simple_symbol);
      if (lookahead == 'A') ADVANCE(541);
      if (sym_simple_symbol_character_set_1(lookahead)) ADVANCE(585);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_simple_symbol);
      if (lookahead == 'A') ADVANCE(551);
      if (sym_simple_symbol_character_set_1(lookahead)) ADVANCE(585);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_simple_symbol);
      if (lookahead == 'A') ADVANCE(559);
      if (sym_simple_symbol_character_set_1(lookahead)) ADVANCE(585);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_simple_symbol);
      if (lookahead == 'A') ADVANCE(552);
      if (sym_simple_symbol_character_set_1(lookahead)) ADVANCE(585);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_simple_symbol);
      if (lookahead == 'A') ADVANCE(553);
      if (sym_simple_symbol_character_set_1(lookahead)) ADVANCE(585);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_simple_symbol);
      if (lookahead == 'C') ADVANCE(549);
      if (sym_simple_symbol_character_set_1(lookahead)) ADVANCE(585);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_simple_symbol);
      if (lookahead == 'C') ADVANCE(550);
      if (sym_simple_symbol_character_set_1(lookahead)) ADVANCE(585);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_simple_symbol);
      if (lookahead == 'D') ADVANCE(545);
      if (sym_simple_symbol_character_set_1(lookahead)) ADVANCE(585);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_simple_symbol);
      if (lookahead == 'E') ADVANCE(539);
      if (sym_simple_symbol_character_set_1(lookahead)) ADVANCE(585);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_simple_symbol);
      if (lookahead == 'E') ADVANCE(564);
      if (sym_simple_symbol_character_set_1(lookahead)) ADVANCE(585);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_simple_symbol);
      if (lookahead == 'E') ADVANCE(560);
      if (sym_simple_symbol_character_set_1(lookahead)) ADVANCE(585);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_simple_symbol);
      if (lookahead == 'E') ADVANCE(540);
      if (sym_simple_symbol_character_set_1(lookahead)) ADVANCE(585);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_simple_symbol);
      if (lookahead == 'G') ADVANCE(516);
      if (sym_simple_symbol_character_set_1(lookahead)) ADVANCE(585);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_simple_symbol);
      if (lookahead == 'I') ADVANCE(557);
      if (sym_simple_symbol_character_set_1(lookahead)) ADVANCE(585);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_simple_symbol);
      if (lookahead == 'I') ADVANCE(558);
      if (sym_simple_symbol_character_set_1(lookahead)) ADVANCE(585);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_simple_symbol);
      if (lookahead == 'I') ADVANCE(555);
      if (sym_simple_symbol_character_set_1(lookahead)) ADVANCE(585);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_simple_symbol);
      if (lookahead == 'I') ADVANCE(556);
      if (sym_simple_symbol_character_set_1(lookahead)) ADVANCE(585);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_simple_symbol);
      if (lookahead == 'L') ADVANCE(510);
      if (sym_simple_symbol_character_set_1(lookahead)) ADVANCE(585);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_simple_symbol);
      if (lookahead == 'L') ADVANCE(514);
      if (sym_simple_symbol_character_set_1(lookahead)) ADVANCE(585);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_simple_symbol);
      if (lookahead == 'L') ADVANCE(512);
      if (sym_simple_symbol_character_set_1(lookahead)) ADVANCE(585);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_simple_symbol);
      if (lookahead == 'M') ADVANCE(544);
      if (sym_simple_symbol_character_set_1(lookahead)) ADVANCE(585);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_simple_symbol);
      if (lookahead == 'M') ADVANCE(535);
      if (sym_simple_symbol_character_set_1(lookahead)) ADVANCE(585);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_simple_symbol);
      if (lookahead == 'M') ADVANCE(538);
      if (sym_simple_symbol_character_set_1(lookahead)) ADVANCE(585);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_simple_symbol);
      if (lookahead == 'N') ADVANCE(536);
      if (sym_simple_symbol_character_set_1(lookahead)) ADVANCE(585);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_simple_symbol);
      if (lookahead == 'N') ADVANCE(546);
      if (sym_simple_symbol_character_set_1(lookahead)) ADVANCE(585);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_simple_symbol);
      if (lookahead == 'R') ADVANCE(565);
      if (sym_simple_symbol_character_set_1(lookahead)) ADVANCE(585);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_simple_symbol);
      if (lookahead == 'R') ADVANCE(537);
      if (sym_simple_symbol_character_set_1(lookahead)) ADVANCE(585);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_simple_symbol);
      if (lookahead == 'R') ADVANCE(548);
      if (sym_simple_symbol_character_set_1(lookahead)) ADVANCE(585);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_simple_symbol);
      if (lookahead == 'T') ADVANCE(561);
      if (sym_simple_symbol_character_set_1(lookahead)) ADVANCE(585);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_simple_symbol);
      if (lookahead == 'U') ADVANCE(554);
      if (sym_simple_symbol_character_set_1(lookahead)) ADVANCE(585);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_simple_symbol);
      if (lookahead == 'X') ADVANCE(534);
      if (sym_simple_symbol_character_set_1(lookahead)) ADVANCE(585);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_simple_symbol);
      if (lookahead == 'Y') ADVANCE(508);
      if (sym_simple_symbol_character_set_1(lookahead)) ADVANCE(585);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_simple_symbol);
      if (lookahead == 'a') ADVANCE(574);
      if (sym_simple_symbol_character_set_4(lookahead)) ADVANCE(585);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_simple_symbol);
      if (lookahead == 'a') ADVANCE(576);
      if (sym_simple_symbol_character_set_4(lookahead)) ADVANCE(585);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_simple_symbol);
      if (lookahead == 'a') ADVANCE(582);
      if (sym_simple_symbol_character_set_4(lookahead)) ADVANCE(585);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_simple_symbol);
      if (lookahead == 'c') ADVANCE(571);
      if (sym_simple_symbol_character_set_1(lookahead)) ADVANCE(585);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_simple_symbol);
      if (lookahead == 'e') ADVANCE(581);
      if (sym_simple_symbol_character_set_1(lookahead)) ADVANCE(585);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_simple_symbol);
      if (lookahead == 'h') ADVANCE(531);
      if (sym_simple_symbol_character_set_1(lookahead)) ADVANCE(585);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_simple_symbol);
      if (lookahead == 'i') ADVANCE(580);
      if (sym_simple_symbol_character_set_1(lookahead)) ADVANCE(585);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_simple_symbol);
      if (lookahead == 'l') ADVANCE(529);
      if (sym_simple_symbol_character_set_1(lookahead)) ADVANCE(585);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_simple_symbol);
      if (lookahead == 'l') ADVANCE(573);
      if (sym_simple_symbol_character_set_1(lookahead)) ADVANCE(585);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_simple_symbol);
      if (lookahead == 'o') ADVANCE(577);
      if (sym_simple_symbol_character_set_1(lookahead)) ADVANCE(585);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_simple_symbol);
      if (lookahead == 'r') ADVANCE(533);
      if (sym_simple_symbol_character_set_1(lookahead)) ADVANCE(585);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_simple_symbol);
      if (lookahead == 'r') ADVANCE(566);
      if (sym_simple_symbol_character_set_1(lookahead)) ADVANCE(585);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_simple_symbol);
      if (lookahead == 's') ADVANCE(523);
      if (sym_simple_symbol_character_set_1(lookahead)) ADVANCE(585);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_simple_symbol);
      if (lookahead == 's') ADVANCE(527);
      if (sym_simple_symbol_character_set_1(lookahead)) ADVANCE(585);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_simple_symbol);
      if (lookahead == 's') ADVANCE(583);
      if (sym_simple_symbol_character_set_1(lookahead)) ADVANCE(585);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_simple_symbol);
      if (lookahead == 't') ADVANCE(525);
      if (sym_simple_symbol_character_set_1(lookahead)) ADVANCE(585);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_simple_symbol);
      if (lookahead == 't') ADVANCE(569);
      if (sym_simple_symbol_character_set_1(lookahead)) ADVANCE(585);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_simple_symbol);
      if (lookahead == 't') ADVANCE(579);
      if (sym_simple_symbol_character_set_1(lookahead)) ADVANCE(585);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_simple_symbol);
      if (lookahead == 'x') ADVANCE(572);
      if (sym_simple_symbol_character_set_1(lookahead)) ADVANCE(585);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_simple_symbol);
      if (sym_simple_symbol_character_set_1(lookahead)) ADVANCE(585);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_quoted_symbol);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == 'a') ADVANCE(235);
      if (lookahead == 'd') ADVANCE(201);
      if (lookahead == 'e') ADVANCE(348);
      if (lookahead == 'g') ADVANCE(234);
      if (lookahead == 'i') ADVANCE(268);
      if (lookahead == 'n') ADVANCE(65);
      if (lookahead == 'p') ADVANCE(340);
      if (lookahead == 'r') ADVANCE(67);
      if (lookahead == 'v') ADVANCE(149);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == 'a') ADVANCE(235);
      if (lookahead == 'e') ADVANCE(348);
      if (lookahead == 'n') ADVANCE(65);
      if (lookahead == 'r') ADVANCE(159);
      if (lookahead == 'v') ADVANCE(164);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == 'd') ADVANCE(201);
      if (lookahead == 'g') ADVANCE(234);
      if (lookahead == 'i') ADVANCE(268);
      if (lookahead == 'p') ADVANCE(340);
      if (lookahead == 'r') ADVANCE(68);
      if (lookahead == 'v') ADVANCE(163);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_theory);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_logic);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_COLONdiagnostic_DASHoutput_DASHchannel);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_COLONglobal_DASHdeclaration);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_COLONinteractive_DASHmode);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_COLONprint_DASHsuccess);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_COLONproduce_DASHassertions);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_COLONproduce_DASHmodels);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_COLONproduce_DASHproofs);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_COLONproduce_DASHunsat_DASHassumptions);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_COLONproduce_DASHunsat_DASHcores);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_COLONrandom_DASHseed);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_COLONregular_DASHoutput_DASHchannel);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_COLONreproducible_DASHresource_DASHlimit);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_COLONverbosity);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_COLONall_DASHstatistics);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_COLONassertion_DASHstack_DASHlevels);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(anon_sym_COLONauthors);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_COLONerror_DASHbehavior);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_COLONname);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(anon_sym_COLONreason_DASHunknown);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_COLONversion);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_assert);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_check_DASHsat);
      if (lookahead == '-') ADVANCE(88);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_check_DASHsat_DASHassuming);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_declare_DASHconst);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_declare_DASHdatatype);
      if (lookahead == 's') ADVANCE(623);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_declare_DASHdatatypes);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_declare_DASHfun);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_declare_DASHsort);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_define_DASHfun);
      if (lookahead == '-') ADVANCE(359);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_define_DASHfun_DASHrec);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_define_DASHsort);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_echo);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_exit);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(anon_sym_get_DASHassertions);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_get_DASHassignment);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_get_DASHinfo);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_get_DASHmodel);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_get_DASHoption);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_get_DASHproof);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_get_DASHunsat_DASHassumptions);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_get_DASHunsat_DASHcore);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_get_DASHvalue);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_pop);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(anon_sym_push);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(anon_sym_reset);
      if (lookahead == '-') ADVANCE(81);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_reset_DASHassertions);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_set_DASHinfo);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_set_DASHlogic);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_set_DASHoption);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 32},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 32},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 7},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 7},
  [62] = {.lex_state = 7},
  [63] = {.lex_state = 7},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 7},
  [69] = {.lex_state = 7},
  [70] = {.lex_state = 7},
  [71] = {.lex_state = 7},
  [72] = {.lex_state = 7},
  [73] = {.lex_state = 7},
  [74] = {.lex_state = 7},
  [75] = {.lex_state = 7},
  [76] = {.lex_state = 7},
  [77] = {.lex_state = 8},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 7},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 8},
  [82] = {.lex_state = 7},
  [83] = {.lex_state = 7},
  [84] = {.lex_state = 8},
  [85] = {.lex_state = 7},
  [86] = {.lex_state = 7},
  [87] = {.lex_state = 7},
  [88] = {.lex_state = 7},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 7},
  [91] = {.lex_state = 7},
  [92] = {.lex_state = 7},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 5},
  [95] = {.lex_state = 7},
  [96] = {.lex_state = 7},
  [97] = {.lex_state = 5},
  [98] = {.lex_state = 7},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 6},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 2},
  [110] = {.lex_state = 7},
  [111] = {.lex_state = 7},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 7},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 7},
  [117] = {.lex_state = 7},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 7},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 7},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 6},
  [127] = {.lex_state = 7},
  [128] = {.lex_state = 7},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 7},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 7},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 7},
  [137] = {.lex_state = 7},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 7},
  [140] = {.lex_state = 7},
  [141] = {.lex_state = 7},
  [142] = {.lex_state = 7},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 7},
  [145] = {.lex_state = 7},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 7},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 2},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 7},
  [158] = {.lex_state = 7},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 7},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 2},
  [165] = {.lex_state = 2},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 6},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 2},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 2},
  [176] = {.lex_state = 2},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 7},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 499},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 505},
  [207] = {.lex_state = 32},
  [208] = {.lex_state = 487},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 487},
  [220] = {.lex_state = 32},
  [221] = {.lex_state = 7},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 499},
  [224] = {.lex_state = 491},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 505},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_0] = ACTIONS(1),
    [aux_sym_numeral_token1] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_POUNDx] = ACTIONS(1),
    [anon_sym_POUNDb] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BINARY] = ACTIONS(1),
    [anon_sym_DECIMAL] = ACTIONS(1),
    [anon_sym_HEXADECIMAL] = ACTIONS(1),
    [anon_sym_NUMERAL] = ACTIONS(1),
    [anon_sym_STRING] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_exists] = ACTIONS(1),
    [anon_sym_forall] = ACTIONS(1),
    [anon_sym_match] = ACTIONS(1),
    [anon_sym_par] = ACTIONS(1),
    [sym_quoted_symbol] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_theory] = ACTIONS(1),
    [anon_sym_logic] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_COLONdiagnostic_DASHoutput_DASHchannel] = ACTIONS(1),
    [anon_sym_COLONglobal_DASHdeclaration] = ACTIONS(1),
    [anon_sym_COLONinteractive_DASHmode] = ACTIONS(1),
    [anon_sym_COLONprint_DASHsuccess] = ACTIONS(1),
    [anon_sym_COLONproduce_DASHassertions] = ACTIONS(1),
    [anon_sym_COLONproduce_DASHmodels] = ACTIONS(1),
    [anon_sym_COLONproduce_DASHproofs] = ACTIONS(1),
    [anon_sym_COLONproduce_DASHunsat_DASHassumptions] = ACTIONS(1),
    [anon_sym_COLONproduce_DASHunsat_DASHcores] = ACTIONS(1),
    [anon_sym_COLONrandom_DASHseed] = ACTIONS(1),
    [anon_sym_COLONregular_DASHoutput_DASHchannel] = ACTIONS(1),
    [anon_sym_COLONreproducible_DASHresource_DASHlimit] = ACTIONS(1),
    [anon_sym_COLONverbosity] = ACTIONS(1),
    [anon_sym_COLONall_DASHstatistics] = ACTIONS(1),
    [anon_sym_COLONassertion_DASHstack_DASHlevels] = ACTIONS(1),
    [anon_sym_COLONauthors] = ACTIONS(1),
    [anon_sym_COLONerror_DASHbehavior] = ACTIONS(1),
    [anon_sym_COLONname] = ACTIONS(1),
    [anon_sym_COLONreason_DASHunknown] = ACTIONS(1),
    [anon_sym_COLONversion] = ACTIONS(1),
    [anon_sym_assert] = ACTIONS(1),
    [anon_sym_check_DASHsat] = ACTIONS(1),
    [anon_sym_check_DASHsat_DASHassuming] = ACTIONS(1),
    [anon_sym_declare_DASHconst] = ACTIONS(1),
    [anon_sym_declare_DASHdatatype] = ACTIONS(1),
    [anon_sym_declare_DASHdatatypes] = ACTIONS(1),
    [anon_sym_declare_DASHfun] = ACTIONS(1),
    [anon_sym_declare_DASHsort] = ACTIONS(1),
    [anon_sym_define_DASHfun] = ACTIONS(1),
    [anon_sym_define_DASHfun_DASHrec] = ACTIONS(1),
    [anon_sym_define_DASHsort] = ACTIONS(1),
    [anon_sym_echo] = ACTIONS(1),
    [anon_sym_exit] = ACTIONS(1),
    [anon_sym_get_DASHassertions] = ACTIONS(1),
    [anon_sym_get_DASHassignment] = ACTIONS(1),
    [anon_sym_get_DASHinfo] = ACTIONS(1),
    [anon_sym_get_DASHmodel] = ACTIONS(1),
    [anon_sym_get_DASHoption] = ACTIONS(1),
    [anon_sym_get_DASHproof] = ACTIONS(1),
    [anon_sym_get_DASHunsat_DASHassumptions] = ACTIONS(1),
    [anon_sym_get_DASHunsat_DASHcore] = ACTIONS(1),
    [anon_sym_get_DASHvalue] = ACTIONS(1),
    [anon_sym_pop] = ACTIONS(1),
    [anon_sym_push] = ACTIONS(1),
    [anon_sym_reset] = ACTIONS(1),
    [anon_sym_reset_DASHassertions] = ACTIONS(1),
    [anon_sym_set_DASHinfo] = ACTIONS(1),
    [anon_sym_set_DASHlogic] = ACTIONS(1),
    [anon_sym_set_DASHoption] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(231),
    [sym_comment] = STATE(78),
    [sym_command] = STATE(78),
    [aux_sym_source_file_repeat1] = STATE(78),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(11), 1,
      anon_sym_POUNDx,
    ACTIONS(13), 1,
      anon_sym_POUNDb,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      sym_simple_symbol,
    ACTIONS(21), 1,
      sym_quoted_symbol,
    ACTIONS(23), 1,
      anon_sym_COLON,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_RPAREN,
    STATE(9), 1,
      sym_numeral,
    ACTIONS(9), 2,
      anon_sym_0,
      aux_sym_numeral_token1,
    STATE(6), 2,
      sym_s_expr,
      aux_sym_s_expr_repeat1,
    STATE(13), 4,
      sym_reserved,
      sym_symbol,
      sym_spec_constant,
      sym_keyword,
    STATE(19), 4,
      sym_decimal,
      sym_hexadecimal,
      sym_binary,
      sym_string,
    ACTIONS(17), 13,
      anon_sym_BINARY,
      anon_sym_DECIMAL,
      anon_sym_HEXADECIMAL,
      anon_sym_NUMERAL,
      anon_sym_STRING,
      anon_sym__,
      anon_sym_BANG,
      anon_sym_as,
      anon_sym_let,
      anon_sym_exists,
      anon_sym_forall,
      anon_sym_match,
      anon_sym_par,
  [63] = 14,
    ACTIONS(11), 1,
      anon_sym_POUNDx,
    ACTIONS(13), 1,
      anon_sym_POUNDb,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      sym_simple_symbol,
    ACTIONS(21), 1,
      sym_quoted_symbol,
    ACTIONS(23), 1,
      anon_sym_COLON,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_RPAREN,
    STATE(9), 1,
      sym_numeral,
    ACTIONS(9), 2,
      anon_sym_0,
      aux_sym_numeral_token1,
    STATE(6), 2,
      sym_s_expr,
      aux_sym_s_expr_repeat1,
    STATE(13), 4,
      sym_reserved,
      sym_symbol,
      sym_spec_constant,
      sym_keyword,
    STATE(19), 4,
      sym_decimal,
      sym_hexadecimal,
      sym_binary,
      sym_string,
    ACTIONS(17), 13,
      anon_sym_BINARY,
      anon_sym_DECIMAL,
      anon_sym_HEXADECIMAL,
      anon_sym_NUMERAL,
      anon_sym_STRING,
      anon_sym__,
      anon_sym_BANG,
      anon_sym_as,
      anon_sym_let,
      anon_sym_exists,
      anon_sym_forall,
      anon_sym_match,
      anon_sym_par,
  [126] = 14,
    ACTIONS(11), 1,
      anon_sym_POUNDx,
    ACTIONS(13), 1,
      anon_sym_POUNDb,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      sym_simple_symbol,
    ACTIONS(21), 1,
      sym_quoted_symbol,
    ACTIONS(23), 1,
      anon_sym_COLON,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_RPAREN,
    STATE(9), 1,
      sym_numeral,
    ACTIONS(9), 2,
      anon_sym_0,
      aux_sym_numeral_token1,
    STATE(2), 2,
      sym_s_expr,
      aux_sym_s_expr_repeat1,
    STATE(13), 4,
      sym_reserved,
      sym_symbol,
      sym_spec_constant,
      sym_keyword,
    STATE(19), 4,
      sym_decimal,
      sym_hexadecimal,
      sym_binary,
      sym_string,
    ACTIONS(17), 13,
      anon_sym_BINARY,
      anon_sym_DECIMAL,
      anon_sym_HEXADECIMAL,
      anon_sym_NUMERAL,
      anon_sym_STRING,
      anon_sym__,
      anon_sym_BANG,
      anon_sym_as,
      anon_sym_let,
      anon_sym_exists,
      anon_sym_forall,
      anon_sym_match,
      anon_sym_par,
  [189] = 14,
    ACTIONS(11), 1,
      anon_sym_POUNDx,
    ACTIONS(13), 1,
      anon_sym_POUNDb,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      sym_simple_symbol,
    ACTIONS(21), 1,
      sym_quoted_symbol,
    ACTIONS(23), 1,
      anon_sym_COLON,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_RPAREN,
    STATE(9), 1,
      sym_numeral,
    ACTIONS(9), 2,
      anon_sym_0,
      aux_sym_numeral_token1,
    STATE(3), 2,
      sym_s_expr,
      aux_sym_s_expr_repeat1,
    STATE(13), 4,
      sym_reserved,
      sym_symbol,
      sym_spec_constant,
      sym_keyword,
    STATE(19), 4,
      sym_decimal,
      sym_hexadecimal,
      sym_binary,
      sym_string,
    ACTIONS(17), 13,
      anon_sym_BINARY,
      anon_sym_DECIMAL,
      anon_sym_HEXADECIMAL,
      anon_sym_NUMERAL,
      anon_sym_STRING,
      anon_sym__,
      anon_sym_BANG,
      anon_sym_as,
      anon_sym_let,
      anon_sym_exists,
      anon_sym_forall,
      anon_sym_match,
      anon_sym_par,
  [252] = 14,
    ACTIONS(38), 1,
      anon_sym_POUNDx,
    ACTIONS(41), 1,
      anon_sym_POUNDb,
    ACTIONS(44), 1,
      anon_sym_DQUOTE,
    ACTIONS(50), 1,
      sym_simple_symbol,
    ACTIONS(53), 1,
      sym_quoted_symbol,
    ACTIONS(56), 1,
      anon_sym_COLON,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(62), 1,
      anon_sym_RPAREN,
    STATE(9), 1,
      sym_numeral,
    ACTIONS(35), 2,
      anon_sym_0,
      aux_sym_numeral_token1,
    STATE(6), 2,
      sym_s_expr,
      aux_sym_s_expr_repeat1,
    STATE(13), 4,
      sym_reserved,
      sym_symbol,
      sym_spec_constant,
      sym_keyword,
    STATE(19), 4,
      sym_decimal,
      sym_hexadecimal,
      sym_binary,
      sym_string,
    ACTIONS(47), 13,
      anon_sym_BINARY,
      anon_sym_DECIMAL,
      anon_sym_HEXADECIMAL,
      anon_sym_NUMERAL,
      anon_sym_STRING,
      anon_sym__,
      anon_sym_BANG,
      anon_sym_as,
      anon_sym_let,
      anon_sym_exists,
      anon_sym_forall,
      anon_sym_match,
      anon_sym_par,
  [315] = 20,
    ACTIONS(64), 1,
      anon_sym_assert,
    ACTIONS(68), 1,
      anon_sym_check_DASHsat_DASHassuming,
    ACTIONS(70), 1,
      anon_sym_declare_DASHconst,
    ACTIONS(72), 1,
      anon_sym_declare_DASHdatatype,
    ACTIONS(74), 1,
      anon_sym_declare_DASHdatatypes,
    ACTIONS(76), 1,
      anon_sym_declare_DASHfun,
    ACTIONS(78), 1,
      anon_sym_declare_DASHsort,
    ACTIONS(80), 1,
      anon_sym_define_DASHfun,
    ACTIONS(82), 1,
      anon_sym_define_DASHfun_DASHrec,
    ACTIONS(84), 1,
      anon_sym_define_DASHsort,
    ACTIONS(86), 1,
      anon_sym_echo,
    ACTIONS(90), 1,
      anon_sym_get_DASHinfo,
    ACTIONS(92), 1,
      anon_sym_get_DASHoption,
    ACTIONS(94), 1,
      anon_sym_get_DASHvalue,
    ACTIONS(98), 1,
      anon_sym_set_DASHinfo,
    ACTIONS(100), 1,
      anon_sym_set_DASHlogic,
    ACTIONS(102), 1,
      anon_sym_set_DASHoption,
    ACTIONS(66), 2,
      anon_sym_check_DASHsat,
      anon_sym_reset,
    ACTIONS(96), 2,
      anon_sym_pop,
      anon_sym_push,
    ACTIONS(88), 8,
      anon_sym_exit,
      anon_sym_get_DASHassertions,
      anon_sym_get_DASHassignment,
      anon_sym_get_DASHmodel,
      anon_sym_get_DASHproof,
      anon_sym_get_DASHunsat_DASHassumptions,
      anon_sym_get_DASHunsat_DASHcore,
      anon_sym_reset_DASHassertions,
  [385] = 2,
    ACTIONS(106), 7,
      anon_sym_POUNDx,
      anon_sym_POUNDb,
      anon_sym_DQUOTE,
      sym_quoted_symbol,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(104), 17,
      anon_sym_0,
      aux_sym_numeral_token1,
      anon_sym_DOT,
      anon_sym_BINARY,
      anon_sym_DECIMAL,
      anon_sym_HEXADECIMAL,
      anon_sym_NUMERAL,
      anon_sym_STRING,
      anon_sym__,
      anon_sym_BANG,
      anon_sym_as,
      anon_sym_let,
      anon_sym_exists,
      anon_sym_forall,
      anon_sym_match,
      anon_sym_par,
      sym_simple_symbol,
  [414] = 3,
    ACTIONS(110), 1,
      anon_sym_DOT,
    ACTIONS(112), 7,
      anon_sym_POUNDx,
      anon_sym_POUNDb,
      anon_sym_DQUOTE,
      sym_quoted_symbol,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(108), 16,
      anon_sym_0,
      aux_sym_numeral_token1,
      anon_sym_BINARY,
      anon_sym_DECIMAL,
      anon_sym_HEXADECIMAL,
      anon_sym_NUMERAL,
      anon_sym_STRING,
      anon_sym__,
      anon_sym_BANG,
      anon_sym_as,
      anon_sym_let,
      anon_sym_exists,
      anon_sym_forall,
      anon_sym_match,
      anon_sym_par,
      sym_simple_symbol,
  [445] = 2,
    ACTIONS(116), 7,
      anon_sym_POUNDx,
      anon_sym_POUNDb,
      anon_sym_DQUOTE,
      sym_quoted_symbol,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(114), 16,
      anon_sym_0,
      aux_sym_numeral_token1,
      anon_sym_BINARY,
      anon_sym_DECIMAL,
      anon_sym_HEXADECIMAL,
      anon_sym_NUMERAL,
      anon_sym_STRING,
      anon_sym__,
      anon_sym_BANG,
      anon_sym_as,
      anon_sym_let,
      anon_sym_exists,
      anon_sym_forall,
      anon_sym_match,
      anon_sym_par,
      sym_simple_symbol,
  [473] = 2,
    ACTIONS(120), 7,
      anon_sym_POUNDx,
      anon_sym_POUNDb,
      anon_sym_DQUOTE,
      sym_quoted_symbol,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(118), 16,
      anon_sym_0,
      aux_sym_numeral_token1,
      anon_sym_BINARY,
      anon_sym_DECIMAL,
      anon_sym_HEXADECIMAL,
      anon_sym_NUMERAL,
      anon_sym_STRING,
      anon_sym__,
      anon_sym_BANG,
      anon_sym_as,
      anon_sym_let,
      anon_sym_exists,
      anon_sym_forall,
      anon_sym_match,
      anon_sym_par,
      sym_simple_symbol,
  [501] = 2,
    ACTIONS(124), 7,
      anon_sym_POUNDx,
      anon_sym_POUNDb,
      anon_sym_DQUOTE,
      sym_quoted_symbol,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(122), 16,
      anon_sym_0,
      aux_sym_numeral_token1,
      anon_sym_BINARY,
      anon_sym_DECIMAL,
      anon_sym_HEXADECIMAL,
      anon_sym_NUMERAL,
      anon_sym_STRING,
      anon_sym__,
      anon_sym_BANG,
      anon_sym_as,
      anon_sym_let,
      anon_sym_exists,
      anon_sym_forall,
      anon_sym_match,
      anon_sym_par,
      sym_simple_symbol,
  [529] = 2,
    ACTIONS(128), 7,
      anon_sym_POUNDx,
      anon_sym_POUNDb,
      anon_sym_DQUOTE,
      sym_quoted_symbol,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(126), 16,
      anon_sym_0,
      aux_sym_numeral_token1,
      anon_sym_BINARY,
      anon_sym_DECIMAL,
      anon_sym_HEXADECIMAL,
      anon_sym_NUMERAL,
      anon_sym_STRING,
      anon_sym__,
      anon_sym_BANG,
      anon_sym_as,
      anon_sym_let,
      anon_sym_exists,
      anon_sym_forall,
      anon_sym_match,
      anon_sym_par,
      sym_simple_symbol,
  [557] = 2,
    ACTIONS(132), 7,
      anon_sym_POUNDx,
      anon_sym_POUNDb,
      anon_sym_DQUOTE,
      sym_quoted_symbol,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(130), 16,
      anon_sym_0,
      aux_sym_numeral_token1,
      anon_sym_BINARY,
      anon_sym_DECIMAL,
      anon_sym_HEXADECIMAL,
      anon_sym_NUMERAL,
      anon_sym_STRING,
      anon_sym__,
      anon_sym_BANG,
      anon_sym_as,
      anon_sym_let,
      anon_sym_exists,
      anon_sym_forall,
      anon_sym_match,
      anon_sym_par,
      sym_simple_symbol,
  [585] = 2,
    ACTIONS(136), 7,
      anon_sym_POUNDx,
      anon_sym_POUNDb,
      anon_sym_DQUOTE,
      sym_quoted_symbol,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(134), 16,
      anon_sym_0,
      aux_sym_numeral_token1,
      anon_sym_BINARY,
      anon_sym_DECIMAL,
      anon_sym_HEXADECIMAL,
      anon_sym_NUMERAL,
      anon_sym_STRING,
      anon_sym__,
      anon_sym_BANG,
      anon_sym_as,
      anon_sym_let,
      anon_sym_exists,
      anon_sym_forall,
      anon_sym_match,
      anon_sym_par,
      sym_simple_symbol,
  [613] = 2,
    ACTIONS(140), 7,
      anon_sym_POUNDx,
      anon_sym_POUNDb,
      anon_sym_DQUOTE,
      sym_quoted_symbol,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(138), 16,
      anon_sym_0,
      aux_sym_numeral_token1,
      anon_sym_BINARY,
      anon_sym_DECIMAL,
      anon_sym_HEXADECIMAL,
      anon_sym_NUMERAL,
      anon_sym_STRING,
      anon_sym__,
      anon_sym_BANG,
      anon_sym_as,
      anon_sym_let,
      anon_sym_exists,
      anon_sym_forall,
      anon_sym_match,
      anon_sym_par,
      sym_simple_symbol,
  [641] = 2,
    ACTIONS(144), 7,
      anon_sym_POUNDx,
      anon_sym_POUNDb,
      anon_sym_DQUOTE,
      sym_quoted_symbol,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(142), 16,
      anon_sym_0,
      aux_sym_numeral_token1,
      anon_sym_BINARY,
      anon_sym_DECIMAL,
      anon_sym_HEXADECIMAL,
      anon_sym_NUMERAL,
      anon_sym_STRING,
      anon_sym__,
      anon_sym_BANG,
      anon_sym_as,
      anon_sym_let,
      anon_sym_exists,
      anon_sym_forall,
      anon_sym_match,
      anon_sym_par,
      sym_simple_symbol,
  [669] = 2,
    ACTIONS(148), 7,
      anon_sym_POUNDx,
      anon_sym_POUNDb,
      anon_sym_DQUOTE,
      sym_quoted_symbol,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(146), 16,
      anon_sym_0,
      aux_sym_numeral_token1,
      anon_sym_BINARY,
      anon_sym_DECIMAL,
      anon_sym_HEXADECIMAL,
      anon_sym_NUMERAL,
      anon_sym_STRING,
      anon_sym__,
      anon_sym_BANG,
      anon_sym_as,
      anon_sym_let,
      anon_sym_exists,
      anon_sym_forall,
      anon_sym_match,
      anon_sym_par,
      sym_simple_symbol,
  [697] = 2,
    ACTIONS(112), 7,
      anon_sym_POUNDx,
      anon_sym_POUNDb,
      anon_sym_DQUOTE,
      sym_quoted_symbol,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(108), 16,
      anon_sym_0,
      aux_sym_numeral_token1,
      anon_sym_BINARY,
      anon_sym_DECIMAL,
      anon_sym_HEXADECIMAL,
      anon_sym_NUMERAL,
      anon_sym_STRING,
      anon_sym__,
      anon_sym_BANG,
      anon_sym_as,
      anon_sym_let,
      anon_sym_exists,
      anon_sym_forall,
      anon_sym_match,
      anon_sym_par,
      sym_simple_symbol,
  [725] = 2,
    ACTIONS(152), 7,
      anon_sym_POUNDx,
      anon_sym_POUNDb,
      anon_sym_DQUOTE,
      sym_quoted_symbol,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(150), 16,
      anon_sym_0,
      aux_sym_numeral_token1,
      anon_sym_BINARY,
      anon_sym_DECIMAL,
      anon_sym_HEXADECIMAL,
      anon_sym_NUMERAL,
      anon_sym_STRING,
      anon_sym__,
      anon_sym_BANG,
      anon_sym_as,
      anon_sym_let,
      anon_sym_exists,
      anon_sym_forall,
      anon_sym_match,
      anon_sym_par,
      sym_simple_symbol,
  [753] = 14,
    ACTIONS(156), 1,
      anon_sym_POUNDx,
    ACTIONS(158), 1,
      anon_sym_POUNDb,
    ACTIONS(160), 1,
      anon_sym_DQUOTE,
    ACTIONS(162), 1,
      sym_simple_symbol,
    ACTIONS(164), 1,
      sym_quoted_symbol,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_RPAREN,
    STATE(39), 1,
      sym_symbol,
    STATE(41), 1,
      sym_identifier,
    STATE(42), 1,
      sym_numeral,
    ACTIONS(154), 2,
      anon_sym_0,
      aux_sym_numeral_token1,
    STATE(23), 2,
      sym_term,
      aux_sym_term_repeat1,
    STATE(40), 2,
      sym_spec_constant,
      sym_qual_identifier,
    STATE(51), 4,
      sym_decimal,
      sym_hexadecimal,
      sym_binary,
      sym_string,
  [802] = 14,
    ACTIONS(156), 1,
      anon_sym_POUNDx,
    ACTIONS(158), 1,
      anon_sym_POUNDb,
    ACTIONS(160), 1,
      anon_sym_DQUOTE,
    ACTIONS(162), 1,
      sym_simple_symbol,
    ACTIONS(164), 1,
      sym_quoted_symbol,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(170), 1,
      anon_sym_RPAREN,
    STATE(39), 1,
      sym_symbol,
    STATE(41), 1,
      sym_identifier,
    STATE(42), 1,
      sym_numeral,
    ACTIONS(154), 2,
      anon_sym_0,
      aux_sym_numeral_token1,
    STATE(23), 2,
      sym_term,
      aux_sym_term_repeat1,
    STATE(40), 2,
      sym_spec_constant,
      sym_qual_identifier,
    STATE(51), 4,
      sym_decimal,
      sym_hexadecimal,
      sym_binary,
      sym_string,
  [851] = 14,
    ACTIONS(175), 1,
      anon_sym_POUNDx,
    ACTIONS(178), 1,
      anon_sym_POUNDb,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(184), 1,
      sym_simple_symbol,
    ACTIONS(187), 1,
      sym_quoted_symbol,
    ACTIONS(190), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_RPAREN,
    STATE(39), 1,
      sym_symbol,
    STATE(41), 1,
      sym_identifier,
    STATE(42), 1,
      sym_numeral,
    ACTIONS(172), 2,
      anon_sym_0,
      aux_sym_numeral_token1,
    STATE(23), 2,
      sym_term,
      aux_sym_term_repeat1,
    STATE(40), 2,
      sym_spec_constant,
      sym_qual_identifier,
    STATE(51), 4,
      sym_decimal,
      sym_hexadecimal,
      sym_binary,
      sym_string,
  [900] = 13,
    ACTIONS(156), 1,
      anon_sym_POUNDx,
    ACTIONS(158), 1,
      anon_sym_POUNDb,
    ACTIONS(160), 1,
      anon_sym_DQUOTE,
    ACTIONS(162), 1,
      sym_simple_symbol,
    ACTIONS(164), 1,
      sym_quoted_symbol,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    STATE(39), 1,
      sym_symbol,
    STATE(41), 1,
      sym_identifier,
    STATE(42), 1,
      sym_numeral,
    ACTIONS(154), 2,
      anon_sym_0,
      aux_sym_numeral_token1,
    STATE(21), 2,
      sym_term,
      aux_sym_term_repeat1,
    STATE(40), 2,
      sym_spec_constant,
      sym_qual_identifier,
    STATE(51), 4,
      sym_decimal,
      sym_hexadecimal,
      sym_binary,
      sym_string,
  [946] = 13,
    ACTIONS(156), 1,
      anon_sym_POUNDx,
    ACTIONS(158), 1,
      anon_sym_POUNDb,
    ACTIONS(160), 1,
      anon_sym_DQUOTE,
    ACTIONS(162), 1,
      sym_simple_symbol,
    ACTIONS(164), 1,
      sym_quoted_symbol,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    STATE(39), 1,
      sym_symbol,
    STATE(41), 1,
      sym_identifier,
    STATE(42), 1,
      sym_numeral,
    ACTIONS(154), 2,
      anon_sym_0,
      aux_sym_numeral_token1,
    STATE(22), 2,
      sym_term,
      aux_sym_term_repeat1,
    STATE(40), 2,
      sym_spec_constant,
      sym_qual_identifier,
    STATE(51), 4,
      sym_decimal,
      sym_hexadecimal,
      sym_binary,
      sym_string,
  [992] = 13,
    ACTIONS(156), 1,
      anon_sym_POUNDx,
    ACTIONS(158), 1,
      anon_sym_POUNDb,
    ACTIONS(160), 1,
      anon_sym_DQUOTE,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(197), 1,
      sym_simple_symbol,
    ACTIONS(199), 1,
      sym_quoted_symbol,
    STATE(39), 1,
      sym_symbol,
    STATE(41), 1,
      sym_identifier,
    STATE(100), 1,
      sym_numeral,
    STATE(150), 1,
      sym_term,
    ACTIONS(195), 2,
      anon_sym_0,
      aux_sym_numeral_token1,
    STATE(40), 2,
      sym_spec_constant,
      sym_qual_identifier,
    STATE(51), 4,
      sym_decimal,
      sym_hexadecimal,
      sym_binary,
      sym_string,
  [1037] = 13,
    ACTIONS(156), 1,
      anon_sym_POUNDx,
    ACTIONS(158), 1,
      anon_sym_POUNDb,
    ACTIONS(160), 1,
      anon_sym_DQUOTE,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(197), 1,
      sym_simple_symbol,
    ACTIONS(199), 1,
      sym_quoted_symbol,
    STATE(39), 1,
      sym_symbol,
    STATE(41), 1,
      sym_identifier,
    STATE(100), 1,
      sym_numeral,
    STATE(194), 1,
      sym_term,
    ACTIONS(195), 2,
      anon_sym_0,
      aux_sym_numeral_token1,
    STATE(40), 2,
      sym_spec_constant,
      sym_qual_identifier,
    STATE(51), 4,
      sym_decimal,
      sym_hexadecimal,
      sym_binary,
      sym_string,
  [1082] = 13,
    ACTIONS(156), 1,
      anon_sym_POUNDx,
    ACTIONS(158), 1,
      anon_sym_POUNDb,
    ACTIONS(160), 1,
      anon_sym_DQUOTE,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(197), 1,
      sym_simple_symbol,
    ACTIONS(199), 1,
      sym_quoted_symbol,
    STATE(39), 1,
      sym_symbol,
    STATE(41), 1,
      sym_identifier,
    STATE(100), 1,
      sym_numeral,
    STATE(190), 1,
      sym_term,
    ACTIONS(195), 2,
      anon_sym_0,
      aux_sym_numeral_token1,
    STATE(40), 2,
      sym_spec_constant,
      sym_qual_identifier,
    STATE(51), 4,
      sym_decimal,
      sym_hexadecimal,
      sym_binary,
      sym_string,
  [1127] = 13,
    ACTIONS(156), 1,
      anon_sym_POUNDx,
    ACTIONS(158), 1,
      anon_sym_POUNDb,
    ACTIONS(160), 1,
      anon_sym_DQUOTE,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(197), 1,
      sym_simple_symbol,
    ACTIONS(199), 1,
      sym_quoted_symbol,
    STATE(39), 1,
      sym_symbol,
    STATE(41), 1,
      sym_identifier,
    STATE(100), 1,
      sym_numeral,
    STATE(193), 1,
      sym_term,
    ACTIONS(195), 2,
      anon_sym_0,
      aux_sym_numeral_token1,
    STATE(40), 2,
      sym_spec_constant,
      sym_qual_identifier,
    STATE(51), 4,
      sym_decimal,
      sym_hexadecimal,
      sym_binary,
      sym_string,
  [1172] = 13,
    ACTIONS(156), 1,
      anon_sym_POUNDx,
    ACTIONS(158), 1,
      anon_sym_POUNDb,
    ACTIONS(160), 1,
      anon_sym_DQUOTE,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(197), 1,
      sym_simple_symbol,
    ACTIONS(199), 1,
      sym_quoted_symbol,
    STATE(39), 1,
      sym_symbol,
    STATE(41), 1,
      sym_identifier,
    STATE(100), 1,
      sym_numeral,
    STATE(109), 1,
      sym_term,
    ACTIONS(195), 2,
      anon_sym_0,
      aux_sym_numeral_token1,
    STATE(40), 2,
      sym_spec_constant,
      sym_qual_identifier,
    STATE(51), 4,
      sym_decimal,
      sym_hexadecimal,
      sym_binary,
      sym_string,
  [1217] = 13,
    ACTIONS(156), 1,
      anon_sym_POUNDx,
    ACTIONS(158), 1,
      anon_sym_POUNDb,
    ACTIONS(160), 1,
      anon_sym_DQUOTE,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(197), 1,
      sym_simple_symbol,
    ACTIONS(199), 1,
      sym_quoted_symbol,
    STATE(39), 1,
      sym_symbol,
    STATE(41), 1,
      sym_identifier,
    STATE(100), 1,
      sym_numeral,
    STATE(189), 1,
      sym_term,
    ACTIONS(195), 2,
      anon_sym_0,
      aux_sym_numeral_token1,
    STATE(40), 2,
      sym_spec_constant,
      sym_qual_identifier,
    STATE(51), 4,
      sym_decimal,
      sym_hexadecimal,
      sym_binary,
      sym_string,
  [1262] = 13,
    ACTIONS(156), 1,
      anon_sym_POUNDx,
    ACTIONS(158), 1,
      anon_sym_POUNDb,
    ACTIONS(160), 1,
      anon_sym_DQUOTE,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(197), 1,
      sym_simple_symbol,
    ACTIONS(199), 1,
      sym_quoted_symbol,
    STATE(39), 1,
      sym_symbol,
    STATE(41), 1,
      sym_identifier,
    STATE(100), 1,
      sym_numeral,
    STATE(205), 1,
      sym_term,
    ACTIONS(195), 2,
      anon_sym_0,
      aux_sym_numeral_token1,
    STATE(40), 2,
      sym_spec_constant,
      sym_qual_identifier,
    STATE(51), 4,
      sym_decimal,
      sym_hexadecimal,
      sym_binary,
      sym_string,
  [1307] = 12,
    ACTIONS(156), 1,
      anon_sym_POUNDx,
    ACTIONS(158), 1,
      anon_sym_POUNDb,
    ACTIONS(160), 1,
      anon_sym_DQUOTE,
    ACTIONS(197), 1,
      sym_simple_symbol,
    ACTIONS(199), 1,
      sym_quoted_symbol,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    STATE(100), 1,
      sym_numeral,
    STATE(164), 1,
      sym_attribute_value,
    ACTIONS(195), 2,
      anon_sym_0,
      aux_sym_numeral_token1,
    ACTIONS(201), 2,
      anon_sym_COLON,
      anon_sym_RPAREN,
    STATE(165), 2,
      sym_symbol,
      sym_spec_constant,
    STATE(51), 4,
      sym_decimal,
      sym_hexadecimal,
      sym_binary,
      sym_string,
  [1350] = 13,
    ACTIONS(156), 1,
      anon_sym_POUNDx,
    ACTIONS(158), 1,
      anon_sym_POUNDb,
    ACTIONS(160), 1,
      anon_sym_DQUOTE,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(197), 1,
      sym_simple_symbol,
    ACTIONS(199), 1,
      sym_quoted_symbol,
    STATE(39), 1,
      sym_symbol,
    STATE(41), 1,
      sym_identifier,
    STATE(100), 1,
      sym_numeral,
    STATE(192), 1,
      sym_term,
    ACTIONS(195), 2,
      anon_sym_0,
      aux_sym_numeral_token1,
    STATE(40), 2,
      sym_spec_constant,
      sym_qual_identifier,
    STATE(51), 4,
      sym_decimal,
      sym_hexadecimal,
      sym_binary,
      sym_string,
  [1395] = 7,
    ACTIONS(205), 1,
      anon_sym_COLON,
    STATE(33), 1,
      sym_keyword,
    STATE(200), 1,
      sym_attribute,
    STATE(205), 1,
      sym_option,
    ACTIONS(207), 2,
      anon_sym_COLONdiagnostic_DASHoutput_DASHchannel,
      anon_sym_COLONregular_DASHoutput_DASHchannel,
    ACTIONS(211), 3,
      anon_sym_COLONrandom_DASHseed,
      anon_sym_COLONreproducible_DASHresource_DASHlimit,
      anon_sym_COLONverbosity,
    ACTIONS(209), 8,
      anon_sym_COLONglobal_DASHdeclaration,
      anon_sym_COLONinteractive_DASHmode,
      anon_sym_COLONprint_DASHsuccess,
      anon_sym_COLONproduce_DASHassertions,
      anon_sym_COLONproduce_DASHmodels,
      anon_sym_COLONproduce_DASHproofs,
      anon_sym_COLONproduce_DASHunsat_DASHassumptions,
      anon_sym_COLONproduce_DASHunsat_DASHcores,
  [1427] = 12,
    ACTIONS(162), 1,
      sym_simple_symbol,
    ACTIONS(164), 1,
      sym_quoted_symbol,
    ACTIONS(213), 1,
      anon_sym__,
    ACTIONS(215), 1,
      anon_sym_BANG,
    ACTIONS(217), 1,
      anon_sym_as,
    ACTIONS(219), 1,
      anon_sym_let,
    ACTIONS(223), 1,
      anon_sym_match,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    STATE(24), 1,
      sym_qual_identifier,
    STATE(39), 1,
      sym_symbol,
    STATE(41), 1,
      sym_identifier,
    ACTIONS(221), 2,
      anon_sym_exists,
      anon_sym_forall,
  [1465] = 2,
    ACTIONS(227), 3,
      anon_sym_0,
      aux_sym_numeral_token1,
      sym_simple_symbol,
    ACTIONS(229), 7,
      anon_sym_POUNDx,
      anon_sym_POUNDb,
      anon_sym_DQUOTE,
      sym_quoted_symbol,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1480] = 2,
    ACTIONS(231), 3,
      anon_sym_0,
      aux_sym_numeral_token1,
      sym_simple_symbol,
    ACTIONS(233), 7,
      anon_sym_POUNDx,
      anon_sym_POUNDb,
      anon_sym_DQUOTE,
      sym_quoted_symbol,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1495] = 2,
    ACTIONS(235), 3,
      anon_sym_0,
      aux_sym_numeral_token1,
      sym_simple_symbol,
    ACTIONS(237), 7,
      anon_sym_POUNDx,
      anon_sym_POUNDb,
      anon_sym_DQUOTE,
      sym_quoted_symbol,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1510] = 2,
    ACTIONS(239), 3,
      anon_sym_0,
      aux_sym_numeral_token1,
      sym_simple_symbol,
    ACTIONS(241), 7,
      anon_sym_POUNDx,
      anon_sym_POUNDb,
      anon_sym_DQUOTE,
      sym_quoted_symbol,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1525] = 2,
    ACTIONS(243), 3,
      anon_sym_0,
      aux_sym_numeral_token1,
      sym_simple_symbol,
    ACTIONS(245), 7,
      anon_sym_POUNDx,
      anon_sym_POUNDb,
      anon_sym_DQUOTE,
      sym_quoted_symbol,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1540] = 3,
    ACTIONS(247), 1,
      anon_sym_DOT,
    ACTIONS(108), 3,
      anon_sym_0,
      aux_sym_numeral_token1,
      sym_simple_symbol,
    ACTIONS(112), 6,
      anon_sym_POUNDx,
      anon_sym_POUNDb,
      anon_sym_DQUOTE,
      sym_quoted_symbol,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1557] = 2,
    ACTIONS(146), 3,
      anon_sym_0,
      aux_sym_numeral_token1,
      sym_simple_symbol,
    ACTIONS(148), 7,
      anon_sym_POUNDx,
      anon_sym_POUNDb,
      anon_sym_DQUOTE,
      sym_quoted_symbol,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1572] = 2,
    ACTIONS(104), 4,
      anon_sym_0,
      aux_sym_numeral_token1,
      anon_sym_DOT,
      sym_simple_symbol,
    ACTIONS(106), 6,
      anon_sym_POUNDx,
      anon_sym_POUNDb,
      anon_sym_DQUOTE,
      sym_quoted_symbol,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1587] = 4,
    ACTIONS(205), 1,
      anon_sym_COLON,
    STATE(187), 1,
      sym_keyword,
    STATE(205), 1,
      sym_info_flag,
    ACTIONS(249), 7,
      anon_sym_COLONall_DASHstatistics,
      anon_sym_COLONassertion_DASHstack_DASHlevels,
      anon_sym_COLONauthors,
      anon_sym_COLONerror_DASHbehavior,
      anon_sym_COLONname,
      anon_sym_COLONreason_DASHunknown,
      anon_sym_COLONversion,
  [1606] = 2,
    ACTIONS(251), 3,
      anon_sym_0,
      aux_sym_numeral_token1,
      sym_simple_symbol,
    ACTIONS(253), 7,
      anon_sym_POUNDx,
      anon_sym_POUNDb,
      anon_sym_DQUOTE,
      sym_quoted_symbol,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1621] = 2,
    ACTIONS(255), 3,
      anon_sym_0,
      aux_sym_numeral_token1,
      sym_simple_symbol,
    ACTIONS(257), 7,
      anon_sym_POUNDx,
      anon_sym_POUNDb,
      anon_sym_DQUOTE,
      sym_quoted_symbol,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1636] = 2,
    ACTIONS(259), 3,
      anon_sym_0,
      aux_sym_numeral_token1,
      sym_simple_symbol,
    ACTIONS(261), 7,
      anon_sym_POUNDx,
      anon_sym_POUNDb,
      anon_sym_DQUOTE,
      sym_quoted_symbol,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1651] = 2,
    ACTIONS(138), 3,
      anon_sym_0,
      aux_sym_numeral_token1,
      sym_simple_symbol,
    ACTIONS(140), 7,
      anon_sym_POUNDx,
      anon_sym_POUNDb,
      anon_sym_DQUOTE,
      sym_quoted_symbol,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1666] = 2,
    ACTIONS(142), 3,
      anon_sym_0,
      aux_sym_numeral_token1,
      sym_simple_symbol,
    ACTIONS(144), 7,
      anon_sym_POUNDx,
      anon_sym_POUNDb,
      anon_sym_DQUOTE,
      sym_quoted_symbol,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1681] = 2,
    ACTIONS(108), 3,
      anon_sym_0,
      aux_sym_numeral_token1,
      sym_simple_symbol,
    ACTIONS(112), 7,
      anon_sym_POUNDx,
      anon_sym_POUNDb,
      anon_sym_DQUOTE,
      sym_quoted_symbol,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1696] = 2,
    ACTIONS(130), 3,
      anon_sym_0,
      aux_sym_numeral_token1,
      sym_simple_symbol,
    ACTIONS(132), 7,
      anon_sym_POUNDx,
      anon_sym_POUNDb,
      anon_sym_DQUOTE,
      sym_quoted_symbol,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1711] = 2,
    ACTIONS(134), 3,
      anon_sym_0,
      aux_sym_numeral_token1,
      sym_simple_symbol,
    ACTIONS(136), 7,
      anon_sym_POUNDx,
      anon_sym_POUNDb,
      anon_sym_DQUOTE,
      sym_quoted_symbol,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1726] = 6,
    ACTIONS(162), 1,
      sym_simple_symbol,
    ACTIONS(164), 1,
      sym_quoted_symbol,
    ACTIONS(265), 1,
      anon_sym_RPAREN,
    ACTIONS(263), 2,
      anon_sym_0,
      aux_sym_numeral_token1,
    STATE(55), 2,
      sym_index,
      aux_sym_identifier_repeat1,
    STATE(97), 2,
      sym_numeral,
      sym_symbol,
  [1748] = 6,
    ACTIONS(270), 1,
      sym_simple_symbol,
    ACTIONS(273), 1,
      sym_quoted_symbol,
    ACTIONS(276), 1,
      anon_sym_RPAREN,
    ACTIONS(267), 2,
      anon_sym_0,
      aux_sym_numeral_token1,
    STATE(55), 2,
      sym_index,
      aux_sym_identifier_repeat1,
    STATE(97), 2,
      sym_numeral,
      sym_symbol,
  [1770] = 2,
    ACTIONS(122), 3,
      anon_sym_0,
      aux_sym_numeral_token1,
      sym_simple_symbol,
    ACTIONS(124), 6,
      anon_sym_POUNDx,
      anon_sym_POUNDb,
      anon_sym_DQUOTE,
      sym_quoted_symbol,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1784] = 6,
    ACTIONS(162), 1,
      sym_simple_symbol,
    ACTIONS(164), 1,
      sym_quoted_symbol,
    ACTIONS(278), 1,
      anon_sym_RPAREN,
    ACTIONS(263), 2,
      anon_sym_0,
      aux_sym_numeral_token1,
    STATE(55), 2,
      sym_index,
      aux_sym_identifier_repeat1,
    STATE(97), 2,
      sym_numeral,
      sym_symbol,
  [1806] = 6,
    ACTIONS(283), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      anon_sym_RPAREN,
    STATE(120), 1,
      sym_symbol,
    STATE(124), 1,
      sym_identifier,
    ACTIONS(280), 2,
      sym_simple_symbol,
      sym_quoted_symbol,
    STATE(58), 2,
      sym_sort,
      aux_sym_sort_repeat1,
  [1827] = 5,
    ACTIONS(162), 1,
      sym_simple_symbol,
    ACTIONS(164), 1,
      sym_quoted_symbol,
    ACTIONS(263), 2,
      anon_sym_0,
      aux_sym_numeral_token1,
    STATE(57), 2,
      sym_index,
      aux_sym_identifier_repeat1,
    STATE(97), 2,
      sym_numeral,
      sym_symbol,
  [1846] = 5,
    ACTIONS(162), 1,
      sym_simple_symbol,
    ACTIONS(164), 1,
      sym_quoted_symbol,
    ACTIONS(263), 2,
      anon_sym_0,
      aux_sym_numeral_token1,
    STATE(54), 2,
      sym_index,
      aux_sym_identifier_repeat1,
    STATE(97), 2,
      sym_numeral,
      sym_symbol,
  [1865] = 6,
    ACTIONS(288), 1,
      anon_sym_LPAREN,
    ACTIONS(290), 1,
      anon_sym_RPAREN,
    STATE(120), 1,
      sym_symbol,
    STATE(124), 1,
      sym_identifier,
    ACTIONS(199), 2,
      sym_simple_symbol,
      sym_quoted_symbol,
    STATE(58), 2,
      sym_sort,
      aux_sym_sort_repeat1,
  [1886] = 6,
    ACTIONS(288), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_RPAREN,
    STATE(120), 1,
      sym_symbol,
    STATE(124), 1,
      sym_identifier,
    ACTIONS(199), 2,
      sym_simple_symbol,
      sym_quoted_symbol,
    STATE(58), 2,
      sym_sort,
      aux_sym_sort_repeat1,
  [1907] = 6,
    ACTIONS(288), 1,
      anon_sym_LPAREN,
    ACTIONS(294), 1,
      anon_sym_RPAREN,
    STATE(120), 1,
      sym_symbol,
    STATE(124), 1,
      sym_identifier,
    ACTIONS(199), 2,
      sym_simple_symbol,
      sym_quoted_symbol,
    STATE(58), 2,
      sym_sort,
      aux_sym_sort_repeat1,
  [1928] = 2,
    ACTIONS(296), 3,
      anon_sym_0,
      aux_sym_numeral_token1,
      sym_simple_symbol,
    ACTIONS(298), 5,
      anon_sym_POUNDx,
      anon_sym_POUNDb,
      anon_sym_DQUOTE,
      sym_quoted_symbol,
      anon_sym_LPAREN,
  [1941] = 2,
    ACTIONS(300), 3,
      anon_sym_0,
      aux_sym_numeral_token1,
      sym_simple_symbol,
    ACTIONS(302), 5,
      anon_sym_POUNDx,
      anon_sym_POUNDb,
      anon_sym_DQUOTE,
      sym_quoted_symbol,
      anon_sym_LPAREN,
  [1954] = 2,
    ACTIONS(304), 3,
      anon_sym_0,
      aux_sym_numeral_token1,
      sym_simple_symbol,
    ACTIONS(306), 5,
      anon_sym_POUNDx,
      anon_sym_POUNDb,
      anon_sym_DQUOTE,
      sym_quoted_symbol,
      anon_sym_LPAREN,
  [1967] = 2,
    ACTIONS(308), 3,
      anon_sym_0,
      aux_sym_numeral_token1,
      sym_simple_symbol,
    ACTIONS(310), 5,
      anon_sym_POUNDx,
      anon_sym_POUNDb,
      anon_sym_DQUOTE,
      sym_quoted_symbol,
      anon_sym_LPAREN,
  [1980] = 6,
    ACTIONS(288), 1,
      anon_sym_LPAREN,
    ACTIONS(312), 1,
      anon_sym_RPAREN,
    STATE(120), 1,
      sym_symbol,
    STATE(124), 1,
      sym_identifier,
    ACTIONS(199), 2,
      sym_simple_symbol,
      sym_quoted_symbol,
    STATE(61), 2,
      sym_sort,
      aux_sym_sort_repeat1,
  [2001] = 5,
    ACTIONS(288), 1,
      anon_sym_LPAREN,
    STATE(120), 1,
      sym_symbol,
    STATE(124), 1,
      sym_identifier,
    ACTIONS(199), 2,
      sym_simple_symbol,
      sym_quoted_symbol,
    STATE(63), 2,
      sym_sort,
      aux_sym_sort_repeat1,
  [2019] = 5,
    ACTIONS(288), 1,
      anon_sym_LPAREN,
    STATE(120), 1,
      sym_symbol,
    STATE(124), 1,
      sym_identifier,
    ACTIONS(199), 2,
      sym_simple_symbol,
      sym_quoted_symbol,
    STATE(62), 2,
      sym_sort,
      aux_sym_sort_repeat1,
  [2037] = 5,
    ACTIONS(314), 1,
      anon_sym_LPAREN,
    ACTIONS(316), 1,
      anon_sym_RPAREN,
    STATE(127), 1,
      sym_symbol,
    ACTIONS(199), 2,
      sym_simple_symbol,
      sym_quoted_symbol,
    STATE(73), 2,
      sym_prop_literal,
      aux_sym_command_repeat1,
  [2055] = 5,
    ACTIONS(321), 1,
      anon_sym_LPAREN,
    ACTIONS(324), 1,
      anon_sym_RPAREN,
    STATE(127), 1,
      sym_symbol,
    ACTIONS(318), 2,
      sym_simple_symbol,
      sym_quoted_symbol,
    STATE(72), 2,
      sym_prop_literal,
      aux_sym_command_repeat1,
  [2073] = 5,
    ACTIONS(170), 1,
      anon_sym_RPAREN,
    ACTIONS(314), 1,
      anon_sym_LPAREN,
    STATE(127), 1,
      sym_symbol,
    ACTIONS(199), 2,
      sym_simple_symbol,
      sym_quoted_symbol,
    STATE(72), 2,
      sym_prop_literal,
      aux_sym_command_repeat1,
  [2091] = 5,
    ACTIONS(326), 1,
      anon_sym_LPAREN,
    STATE(27), 1,
      sym_sort,
    STATE(39), 1,
      sym_symbol,
    STATE(66), 1,
      sym_identifier,
    ACTIONS(164), 2,
      sym_simple_symbol,
      sym_quoted_symbol,
  [2108] = 5,
    ACTIONS(328), 1,
      anon_sym_LPAREN,
    STATE(39), 1,
      sym_symbol,
    STATE(124), 1,
      sym_identifier,
    STATE(196), 1,
      sym_sort,
    ACTIONS(199), 2,
      sym_simple_symbol,
      sym_quoted_symbol,
  [2125] = 5,
    ACTIONS(326), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym_sort,
    STATE(39), 1,
      sym_symbol,
    STATE(66), 1,
      sym_identifier,
    ACTIONS(164), 2,
      sym_simple_symbol,
      sym_quoted_symbol,
  [2142] = 6,
    ACTIONS(197), 1,
      sym_simple_symbol,
    ACTIONS(199), 1,
      sym_quoted_symbol,
    ACTIONS(330), 1,
      anon_sym__,
    ACTIONS(332), 1,
      anon_sym_LPAREN,
    STATE(69), 1,
      sym_identifier,
    STATE(120), 1,
      sym_symbol,
  [2161] = 4,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      ts_builtin_sym_end,
    STATE(80), 3,
      sym_comment,
      sym_command,
      aux_sym_source_file_repeat1,
  [2176] = 5,
    ACTIONS(328), 1,
      anon_sym_LPAREN,
    STATE(39), 1,
      sym_symbol,
    STATE(124), 1,
      sym_identifier,
    STATE(195), 1,
      sym_sort,
    ACTIONS(199), 2,
      sym_simple_symbol,
      sym_quoted_symbol,
  [2193] = 4,
    ACTIONS(336), 1,
      ts_builtin_sym_end,
    ACTIONS(338), 1,
      anon_sym_SEMI,
    ACTIONS(341), 1,
      anon_sym_LPAREN,
    STATE(80), 3,
      sym_comment,
      sym_command,
      aux_sym_source_file_repeat1,
  [2208] = 6,
    ACTIONS(197), 1,
      sym_simple_symbol,
    ACTIONS(199), 1,
      sym_quoted_symbol,
    ACTIONS(213), 1,
      anon_sym__,
    ACTIONS(332), 1,
      anon_sym_LPAREN,
    STATE(70), 1,
      sym_identifier,
    STATE(120), 1,
      sym_symbol,
  [2227] = 5,
    ACTIONS(328), 1,
      anon_sym_LPAREN,
    STATE(39), 1,
      sym_symbol,
    STATE(124), 1,
      sym_identifier,
    STATE(210), 1,
      sym_sort,
    ACTIONS(199), 2,
      sym_simple_symbol,
      sym_quoted_symbol,
  [2244] = 5,
    ACTIONS(328), 1,
      anon_sym_LPAREN,
    STATE(39), 1,
      sym_symbol,
    STATE(124), 1,
      sym_identifier,
    STATE(188), 1,
      sym_sort,
    ACTIONS(199), 2,
      sym_simple_symbol,
      sym_quoted_symbol,
  [2261] = 6,
    ACTIONS(197), 1,
      sym_simple_symbol,
    ACTIONS(199), 1,
      sym_quoted_symbol,
    ACTIONS(213), 1,
      anon_sym__,
    ACTIONS(332), 1,
      anon_sym_LPAREN,
    STATE(69), 1,
      sym_identifier,
    STATE(120), 1,
      sym_symbol,
  [2280] = 5,
    ACTIONS(328), 1,
      anon_sym_LPAREN,
    STATE(39), 1,
      sym_symbol,
    STATE(124), 1,
      sym_identifier,
    STATE(225), 1,
      sym_sort,
    ACTIONS(199), 2,
      sym_simple_symbol,
      sym_quoted_symbol,
  [2297] = 5,
    ACTIONS(328), 1,
      anon_sym_LPAREN,
    STATE(39), 1,
      sym_symbol,
    STATE(124), 1,
      sym_identifier,
    STATE(198), 1,
      sym_sort,
    ACTIONS(199), 2,
      sym_simple_symbol,
      sym_quoted_symbol,
  [2314] = 4,
    ACTIONS(344), 1,
      anon_sym_LPAREN,
    STATE(28), 1,
      sym_pattern,
    STATE(67), 1,
      sym_symbol,
    ACTIONS(164), 2,
      sym_simple_symbol,
      sym_quoted_symbol,
  [2328] = 4,
    ACTIONS(332), 1,
      anon_sym_LPAREN,
    STATE(83), 1,
      sym_identifier,
    STATE(120), 1,
      sym_symbol,
    ACTIONS(199), 2,
      sym_simple_symbol,
      sym_quoted_symbol,
  [2342] = 4,
    ACTIONS(346), 1,
      anon_sym_COLON,
    ACTIONS(349), 1,
      anon_sym_RPAREN,
    STATE(33), 1,
      sym_keyword,
    STATE(89), 2,
      sym_attribute,
      aux_sym_term_repeat5,
  [2356] = 3,
    ACTIONS(351), 1,
      anon_sym_RPAREN,
    ACTIONS(199), 2,
      sym_simple_symbol,
      sym_quoted_symbol,
    STATE(98), 2,
      sym_symbol,
      aux_sym_pattern_repeat1,
  [2368] = 3,
    ACTIONS(290), 1,
      anon_sym_RPAREN,
    ACTIONS(199), 2,
      sym_simple_symbol,
      sym_quoted_symbol,
    STATE(98), 2,
      sym_symbol,
      aux_sym_pattern_repeat1,
  [2380] = 1,
    ACTIONS(124), 5,
      sym_simple_symbol,
      sym_quoted_symbol,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2388] = 4,
    ACTIONS(353), 1,
      anon_sym_COLON,
    ACTIONS(355), 1,
      anon_sym_RPAREN,
    STATE(33), 1,
      sym_keyword,
    STATE(89), 2,
      sym_attribute,
      aux_sym_term_repeat5,
  [2402] = 2,
    ACTIONS(106), 2,
      sym_quoted_symbol,
      anon_sym_RPAREN,
    ACTIONS(104), 3,
      anon_sym_0,
      aux_sym_numeral_token1,
      sym_simple_symbol,
  [2412] = 3,
    ACTIONS(357), 1,
      anon_sym_RPAREN,
    ACTIONS(199), 2,
      sym_simple_symbol,
      sym_quoted_symbol,
    STATE(98), 2,
      sym_symbol,
      aux_sym_pattern_repeat1,
  [2424] = 3,
    ACTIONS(312), 1,
      anon_sym_RPAREN,
    ACTIONS(199), 2,
      sym_simple_symbol,
      sym_quoted_symbol,
    STATE(91), 2,
      sym_symbol,
      aux_sym_pattern_repeat1,
  [2436] = 2,
    ACTIONS(361), 2,
      sym_quoted_symbol,
      anon_sym_RPAREN,
    ACTIONS(359), 3,
      anon_sym_0,
      aux_sym_numeral_token1,
      sym_simple_symbol,
  [2446] = 3,
    ACTIONS(366), 1,
      anon_sym_RPAREN,
    ACTIONS(363), 2,
      sym_simple_symbol,
      sym_quoted_symbol,
    STATE(98), 2,
      sym_symbol,
      aux_sym_pattern_repeat1,
  [2458] = 3,
    ACTIONS(368), 1,
      anon_sym_LPAREN,
    ACTIONS(371), 1,
      anon_sym_RPAREN,
    STATE(99), 2,
      sym_constructor_dec,
      aux_sym_datatype_dec_repeat1,
  [2469] = 2,
    ACTIONS(373), 1,
      anon_sym_DOT,
    ACTIONS(112), 3,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2478] = 3,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(378), 1,
      anon_sym_RPAREN,
    STATE(101), 2,
      sym_datatype_dec,
      aux_sym_command_repeat3,
  [2489] = 3,
    ACTIONS(380), 1,
      anon_sym_LPAREN,
    ACTIONS(383), 1,
      anon_sym_RPAREN,
    STATE(102), 2,
      sym_var_binding,
      aux_sym_term_repeat2,
  [2500] = 3,
    ACTIONS(385), 1,
      anon_sym_LPAREN,
    ACTIONS(387), 1,
      anon_sym_RPAREN,
    STATE(99), 2,
      sym_constructor_dec,
      aux_sym_datatype_dec_repeat1,
  [2511] = 3,
    ACTIONS(385), 1,
      anon_sym_LPAREN,
    ACTIONS(389), 1,
      anon_sym_RPAREN,
    STATE(99), 2,
      sym_constructor_dec,
      aux_sym_datatype_dec_repeat1,
  [2522] = 3,
    ACTIONS(391), 1,
      anon_sym_LPAREN,
    ACTIONS(394), 1,
      anon_sym_RPAREN,
    STATE(105), 2,
      sym_selector_dec,
      aux_sym_constructor_dec_repeat1,
  [2533] = 3,
    ACTIONS(396), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      anon_sym_RPAREN,
    STATE(101), 2,
      sym_datatype_dec,
      aux_sym_command_repeat3,
  [2544] = 3,
    ACTIONS(400), 1,
      anon_sym_LPAREN,
    ACTIONS(403), 1,
      anon_sym_RPAREN,
    STATE(107), 2,
      sym_sort_dec,
      aux_sym_command_repeat2,
  [2555] = 3,
    ACTIONS(405), 1,
      anon_sym_LPAREN,
    ACTIONS(407), 1,
      anon_sym_RPAREN,
    STATE(105), 2,
      sym_selector_dec,
      aux_sym_constructor_dec_repeat1,
  [2566] = 3,
    ACTIONS(353), 1,
      anon_sym_COLON,
    STATE(33), 1,
      sym_keyword,
    STATE(93), 2,
      sym_attribute,
      aux_sym_term_repeat5,
  [2577] = 1,
    ACTIONS(298), 4,
      sym_simple_symbol,
      sym_quoted_symbol,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2584] = 1,
    ACTIONS(409), 4,
      sym_simple_symbol,
      sym_quoted_symbol,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2591] = 3,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      anon_sym_RPAREN,
    STATE(114), 2,
      sym_sorted_var,
      aux_sym_term_repeat3,
  [2602] = 2,
    ACTIONS(199), 2,
      sym_simple_symbol,
      sym_quoted_symbol,
    STATE(95), 2,
      sym_symbol,
      aux_sym_pattern_repeat1,
  [2611] = 3,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(418), 1,
      anon_sym_RPAREN,
    STATE(114), 2,
      sym_sorted_var,
      aux_sym_term_repeat3,
  [2622] = 3,
    ACTIONS(420), 1,
      anon_sym_LPAREN,
    ACTIONS(423), 1,
      anon_sym_RPAREN,
    STATE(115), 2,
      sym_match_case,
      aux_sym_term_repeat4,
  [2633] = 3,
    STATE(191), 1,
      sym_symbol,
    STATE(205), 1,
      sym_function_def,
    ACTIONS(199), 2,
      sym_simple_symbol,
      sym_quoted_symbol,
  [2644] = 1,
    ACTIONS(233), 4,
      sym_simple_symbol,
      sym_quoted_symbol,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2651] = 3,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    ACTIONS(425), 1,
      anon_sym_RPAREN,
    STATE(112), 2,
      sym_sorted_var,
      aux_sym_term_repeat3,
  [2662] = 3,
    ACTIONS(427), 1,
      anon_sym_LPAREN,
    ACTIONS(429), 1,
      anon_sym_RPAREN,
    STATE(107), 2,
      sym_sort_dec,
      aux_sym_command_repeat2,
  [2673] = 1,
    ACTIONS(237), 4,
      sym_simple_symbol,
      sym_quoted_symbol,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2680] = 3,
    ACTIONS(385), 1,
      anon_sym_LPAREN,
    ACTIONS(431), 1,
      anon_sym_par,
    STATE(104), 2,
      sym_constructor_dec,
      aux_sym_datatype_dec_repeat1,
  [2691] = 3,
    ACTIONS(433), 1,
      anon_sym_LPAREN,
    ACTIONS(435), 1,
      anon_sym_RPAREN,
    STATE(102), 2,
      sym_var_binding,
      aux_sym_term_repeat2,
  [2702] = 3,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    ACTIONS(435), 1,
      anon_sym_RPAREN,
    STATE(114), 2,
      sym_sorted_var,
      aux_sym_term_repeat3,
  [2713] = 1,
    ACTIONS(306), 4,
      sym_simple_symbol,
      sym_quoted_symbol,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2720] = 3,
    ACTIONS(355), 1,
      anon_sym_RPAREN,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    STATE(115), 2,
      sym_match_case,
      aux_sym_term_repeat4,
  [2731] = 1,
    ACTIONS(106), 4,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2738] = 1,
    ACTIONS(439), 4,
      sym_simple_symbol,
      sym_quoted_symbol,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2745] = 2,
    ACTIONS(199), 2,
      sym_simple_symbol,
      sym_quoted_symbol,
    STATE(90), 2,
      sym_symbol,
      aux_sym_pattern_repeat1,
  [2754] = 3,
    ACTIONS(405), 1,
      anon_sym_LPAREN,
    ACTIONS(441), 1,
      anon_sym_RPAREN,
    STATE(108), 2,
      sym_selector_dec,
      aux_sym_constructor_dec_repeat1,
  [2765] = 2,
    STATE(60), 1,
      sym_symbol,
    ACTIONS(164), 2,
      sym_simple_symbol,
      sym_quoted_symbol,
  [2773] = 1,
    ACTIONS(443), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
  [2779] = 2,
    STATE(29), 1,
      sym_symbol,
    ACTIONS(164), 2,
      sym_simple_symbol,
      sym_quoted_symbol,
  [2787] = 1,
    ACTIONS(445), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
  [2793] = 1,
    ACTIONS(447), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
  [2799] = 2,
    STATE(210), 1,
      sym_numeral,
    ACTIONS(449), 2,
      anon_sym_0,
      aux_sym_numeral_token1,
  [2807] = 2,
    STATE(59), 1,
      sym_symbol,
    ACTIONS(164), 2,
      sym_simple_symbol,
      sym_quoted_symbol,
  [2815] = 2,
    STATE(82), 1,
      sym_symbol,
    ACTIONS(199), 2,
      sym_simple_symbol,
      sym_quoted_symbol,
  [2823] = 2,
    ACTIONS(396), 1,
      anon_sym_LPAREN,
    STATE(106), 2,
      sym_datatype_dec,
      aux_sym_command_repeat3,
  [2831] = 2,
    STATE(166), 1,
      sym_symbol,
    ACTIONS(199), 2,
      sym_simple_symbol,
      sym_quoted_symbol,
  [2839] = 2,
    STATE(197), 1,
      sym_symbol,
    ACTIONS(199), 2,
      sym_simple_symbol,
      sym_quoted_symbol,
  [2847] = 2,
    STATE(75), 1,
      sym_symbol,
    ACTIONS(199), 2,
      sym_simple_symbol,
      sym_quoted_symbol,
  [2855] = 2,
    STATE(135), 1,
      sym_symbol,
    ACTIONS(451), 2,
      sym_simple_symbol,
      sym_quoted_symbol,
  [2863] = 2,
    STATE(229), 1,
      sym_numeral,
    ACTIONS(449), 2,
      anon_sym_0,
      aux_sym_numeral_token1,
  [2871] = 2,
    STATE(129), 1,
      sym_symbol,
    ACTIONS(199), 2,
      sym_simple_symbol,
      sym_quoted_symbol,
  [2879] = 2,
    STATE(186), 1,
      sym_symbol,
    ACTIONS(199), 2,
      sym_simple_symbol,
      sym_quoted_symbol,
  [2887] = 2,
    STATE(211), 1,
      sym_b_value,
    ACTIONS(453), 2,
      anon_sym_true,
      anon_sym_false,
  [2895] = 1,
    ACTIONS(455), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
  [2901] = 2,
    STATE(230), 1,
      sym_symbol,
    ACTIONS(199), 2,
      sym_simple_symbol,
      sym_quoted_symbol,
  [2909] = 2,
    STATE(211), 1,
      sym_numeral,
    ACTIONS(449), 2,
      anon_sym_0,
      aux_sym_numeral_token1,
  [2917] = 2,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    STATE(125), 2,
      sym_match_case,
      aux_sym_term_repeat4,
  [2925] = 2,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    STATE(123), 2,
      sym_sorted_var,
      aux_sym_term_repeat3,
  [2933] = 2,
    ACTIONS(433), 1,
      anon_sym_LPAREN,
    STATE(122), 2,
      sym_var_binding,
      aux_sym_term_repeat2,
  [2941] = 2,
    ACTIONS(385), 1,
      anon_sym_LPAREN,
    STATE(103), 2,
      sym_constructor_dec,
      aux_sym_datatype_dec_repeat1,
  [2949] = 2,
    STATE(205), 1,
      sym_numeral,
    ACTIONS(449), 2,
      anon_sym_0,
      aux_sym_numeral_token1,
  [2957] = 3,
    ACTIONS(353), 1,
      anon_sym_COLON,
    STATE(33), 1,
      sym_keyword,
    STATE(205), 1,
      sym_attribute,
  [2967] = 1,
    ACTIONS(457), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
  [2973] = 2,
    STATE(143), 1,
      sym_symbol,
    ACTIONS(451), 2,
      sym_simple_symbol,
      sym_quoted_symbol,
  [2981] = 2,
    STATE(205), 1,
      sym_symbol,
    ACTIONS(199), 2,
      sym_simple_symbol,
      sym_quoted_symbol,
  [2989] = 1,
    ACTIONS(459), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
  [2995] = 1,
    ACTIONS(461), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
  [3001] = 2,
    ACTIONS(427), 1,
      anon_sym_LPAREN,
    STATE(119), 2,
      sym_sort_dec,
      aux_sym_command_repeat2,
  [3009] = 2,
    STATE(79), 1,
      sym_symbol,
    ACTIONS(199), 2,
      sym_simple_symbol,
      sym_quoted_symbol,
  [3017] = 1,
    ACTIONS(463), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
  [3023] = 1,
    ACTIONS(465), 2,
      anon_sym_COLON,
      anon_sym_RPAREN,
  [3028] = 1,
    ACTIONS(467), 2,
      anon_sym_COLON,
      anon_sym_RPAREN,
  [3033] = 2,
    ACTIONS(396), 1,
      anon_sym_LPAREN,
    STATE(210), 1,
      sym_datatype_dec,
  [3040] = 1,
    ACTIONS(469), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3045] = 1,
    ACTIONS(471), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3050] = 1,
    ACTIONS(473), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3055] = 1,
    ACTIONS(475), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3060] = 2,
    ACTIONS(477), 1,
      anon_sym__,
    ACTIONS(479), 1,
      anon_sym_as,
  [3067] = 1,
    ACTIONS(124), 2,
      anon_sym_0,
      aux_sym_numeral_token1,
  [3072] = 1,
    ACTIONS(481), 2,
      anon_sym_COLON,
      anon_sym_RPAREN,
  [3077] = 1,
    ACTIONS(483), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3082] = 2,
    ACTIONS(353), 1,
      anon_sym_COLON,
    STATE(205), 1,
      sym_keyword,
  [3089] = 1,
    ACTIONS(485), 2,
      anon_sym_COLON,
      anon_sym_RPAREN,
  [3094] = 2,
    ACTIONS(160), 1,
      anon_sym_DQUOTE,
    STATE(205), 1,
      sym_string,
  [3101] = 1,
    ACTIONS(487), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3106] = 2,
    ACTIONS(160), 1,
      anon_sym_DQUOTE,
    STATE(211), 1,
      sym_string,
  [3113] = 1,
    ACTIONS(489), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3118] = 1,
    ACTIONS(491), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3123] = 1,
    ACTIONS(493), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3128] = 1,
    ACTIONS(495), 1,
      anon_sym_LPAREN,
  [3132] = 1,
    ACTIONS(497), 1,
      sym_simple_symbol,
  [3136] = 1,
    ACTIONS(499), 1,
      anon_sym_RPAREN,
  [3140] = 1,
    ACTIONS(501), 1,
      anon_sym_LPAREN,
  [3144] = 1,
    ACTIONS(503), 1,
      anon_sym_RPAREN,
  [3148] = 1,
    ACTIONS(505), 1,
      anon_sym_RPAREN,
  [3152] = 1,
    ACTIONS(507), 1,
      anon_sym_RPAREN,
  [3156] = 1,
    ACTIONS(509), 1,
      anon_sym_RPAREN,
  [3160] = 1,
    ACTIONS(511), 1,
      anon_sym_LPAREN,
  [3164] = 1,
    ACTIONS(513), 1,
      anon_sym_RPAREN,
  [3168] = 1,
    ACTIONS(515), 1,
      anon_sym_RPAREN,
  [3172] = 1,
    ACTIONS(517), 1,
      anon_sym_RPAREN,
  [3176] = 1,
    ACTIONS(519), 1,
      anon_sym_RPAREN,
  [3180] = 1,
    ACTIONS(521), 1,
      anon_sym_RPAREN,
  [3184] = 1,
    ACTIONS(523), 1,
      anon_sym_LPAREN,
  [3188] = 1,
    ACTIONS(525), 1,
      anon_sym_RPAREN,
  [3192] = 1,
    ACTIONS(527), 1,
      anon_sym_RPAREN,
  [3196] = 1,
    ACTIONS(529), 1,
      anon_sym_RPAREN,
  [3200] = 1,
    ACTIONS(531), 1,
      anon_sym_DQUOTE,
  [3204] = 1,
    ACTIONS(533), 1,
      anon_sym_LPAREN,
  [3208] = 1,
    ACTIONS(535), 1,
      anon_sym_LPAREN,
  [3212] = 1,
    ACTIONS(537), 1,
      aux_sym_decimal_token1,
  [3216] = 1,
    ACTIONS(539), 1,
      anon_sym_RPAREN,
  [3220] = 1,
    ACTIONS(541), 1,
      aux_sym_string_token1,
  [3224] = 1,
    ACTIONS(543), 1,
      aux_sym_binary_token1,
  [3228] = 1,
    ACTIONS(545), 1,
      aux_sym_hexadecimal_token1,
  [3232] = 1,
    ACTIONS(547), 1,
      anon_sym_not,
  [3236] = 1,
    ACTIONS(549), 1,
      anon_sym_RPAREN,
  [3240] = 1,
    ACTIONS(551), 1,
      anon_sym_RPAREN,
  [3244] = 1,
    ACTIONS(553), 1,
      anon_sym_LPAREN,
  [3248] = 1,
    ACTIONS(555), 1,
      anon_sym_RPAREN,
  [3252] = 1,
    ACTIONS(557), 1,
      anon_sym__,
  [3256] = 1,
    ACTIONS(559), 1,
      anon_sym_RPAREN,
  [3260] = 1,
    ACTIONS(561), 1,
      anon_sym_LPAREN,
  [3264] = 1,
    ACTIONS(563), 1,
      anon_sym_LPAREN,
  [3268] = 1,
    ACTIONS(565), 1,
      anon_sym_LPAREN,
  [3272] = 1,
    ACTIONS(567), 1,
      aux_sym_hexadecimal_token1,
  [3276] = 1,
    ACTIONS(569), 1,
      aux_sym_binary_token1,
  [3280] = 1,
    ACTIONS(571), 1,
      sym_simple_symbol,
  [3284] = 1,
    ACTIONS(573), 1,
      anon_sym_DQUOTE,
  [3288] = 1,
    ACTIONS(575), 1,
      aux_sym_decimal_token1,
  [3292] = 1,
    ACTIONS(577), 1,
      aux_sym_comment_token1,
  [3296] = 1,
    ACTIONS(579), 1,
      anon_sym_RPAREN,
  [3300] = 1,
    ACTIONS(581), 1,
      aux_sym_string_token1,
  [3304] = 1,
    ACTIONS(583), 1,
      anon_sym_LPAREN,
  [3308] = 1,
    ACTIONS(585), 1,
      anon_sym_RPAREN,
  [3312] = 1,
    ACTIONS(587), 1,
      anon_sym_RPAREN,
  [3316] = 1,
    ACTIONS(589), 1,
      anon_sym_RPAREN,
  [3320] = 1,
    ACTIONS(591), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 63,
  [SMALL_STATE(4)] = 126,
  [SMALL_STATE(5)] = 189,
  [SMALL_STATE(6)] = 252,
  [SMALL_STATE(7)] = 315,
  [SMALL_STATE(8)] = 385,
  [SMALL_STATE(9)] = 414,
  [SMALL_STATE(10)] = 445,
  [SMALL_STATE(11)] = 473,
  [SMALL_STATE(12)] = 501,
  [SMALL_STATE(13)] = 529,
  [SMALL_STATE(14)] = 557,
  [SMALL_STATE(15)] = 585,
  [SMALL_STATE(16)] = 613,
  [SMALL_STATE(17)] = 641,
  [SMALL_STATE(18)] = 669,
  [SMALL_STATE(19)] = 697,
  [SMALL_STATE(20)] = 725,
  [SMALL_STATE(21)] = 753,
  [SMALL_STATE(22)] = 802,
  [SMALL_STATE(23)] = 851,
  [SMALL_STATE(24)] = 900,
  [SMALL_STATE(25)] = 946,
  [SMALL_STATE(26)] = 992,
  [SMALL_STATE(27)] = 1037,
  [SMALL_STATE(28)] = 1082,
  [SMALL_STATE(29)] = 1127,
  [SMALL_STATE(30)] = 1172,
  [SMALL_STATE(31)] = 1217,
  [SMALL_STATE(32)] = 1262,
  [SMALL_STATE(33)] = 1307,
  [SMALL_STATE(34)] = 1350,
  [SMALL_STATE(35)] = 1395,
  [SMALL_STATE(36)] = 1427,
  [SMALL_STATE(37)] = 1465,
  [SMALL_STATE(38)] = 1480,
  [SMALL_STATE(39)] = 1495,
  [SMALL_STATE(40)] = 1510,
  [SMALL_STATE(41)] = 1525,
  [SMALL_STATE(42)] = 1540,
  [SMALL_STATE(43)] = 1557,
  [SMALL_STATE(44)] = 1572,
  [SMALL_STATE(45)] = 1587,
  [SMALL_STATE(46)] = 1606,
  [SMALL_STATE(47)] = 1621,
  [SMALL_STATE(48)] = 1636,
  [SMALL_STATE(49)] = 1651,
  [SMALL_STATE(50)] = 1666,
  [SMALL_STATE(51)] = 1681,
  [SMALL_STATE(52)] = 1696,
  [SMALL_STATE(53)] = 1711,
  [SMALL_STATE(54)] = 1726,
  [SMALL_STATE(55)] = 1748,
  [SMALL_STATE(56)] = 1770,
  [SMALL_STATE(57)] = 1784,
  [SMALL_STATE(58)] = 1806,
  [SMALL_STATE(59)] = 1827,
  [SMALL_STATE(60)] = 1846,
  [SMALL_STATE(61)] = 1865,
  [SMALL_STATE(62)] = 1886,
  [SMALL_STATE(63)] = 1907,
  [SMALL_STATE(64)] = 1928,
  [SMALL_STATE(65)] = 1941,
  [SMALL_STATE(66)] = 1954,
  [SMALL_STATE(67)] = 1967,
  [SMALL_STATE(68)] = 1980,
  [SMALL_STATE(69)] = 2001,
  [SMALL_STATE(70)] = 2019,
  [SMALL_STATE(71)] = 2037,
  [SMALL_STATE(72)] = 2055,
  [SMALL_STATE(73)] = 2073,
  [SMALL_STATE(74)] = 2091,
  [SMALL_STATE(75)] = 2108,
  [SMALL_STATE(76)] = 2125,
  [SMALL_STATE(77)] = 2142,
  [SMALL_STATE(78)] = 2161,
  [SMALL_STATE(79)] = 2176,
  [SMALL_STATE(80)] = 2193,
  [SMALL_STATE(81)] = 2208,
  [SMALL_STATE(82)] = 2227,
  [SMALL_STATE(83)] = 2244,
  [SMALL_STATE(84)] = 2261,
  [SMALL_STATE(85)] = 2280,
  [SMALL_STATE(86)] = 2297,
  [SMALL_STATE(87)] = 2314,
  [SMALL_STATE(88)] = 2328,
  [SMALL_STATE(89)] = 2342,
  [SMALL_STATE(90)] = 2356,
  [SMALL_STATE(91)] = 2368,
  [SMALL_STATE(92)] = 2380,
  [SMALL_STATE(93)] = 2388,
  [SMALL_STATE(94)] = 2402,
  [SMALL_STATE(95)] = 2412,
  [SMALL_STATE(96)] = 2424,
  [SMALL_STATE(97)] = 2436,
  [SMALL_STATE(98)] = 2446,
  [SMALL_STATE(99)] = 2458,
  [SMALL_STATE(100)] = 2469,
  [SMALL_STATE(101)] = 2478,
  [SMALL_STATE(102)] = 2489,
  [SMALL_STATE(103)] = 2500,
  [SMALL_STATE(104)] = 2511,
  [SMALL_STATE(105)] = 2522,
  [SMALL_STATE(106)] = 2533,
  [SMALL_STATE(107)] = 2544,
  [SMALL_STATE(108)] = 2555,
  [SMALL_STATE(109)] = 2566,
  [SMALL_STATE(110)] = 2577,
  [SMALL_STATE(111)] = 2584,
  [SMALL_STATE(112)] = 2591,
  [SMALL_STATE(113)] = 2602,
  [SMALL_STATE(114)] = 2611,
  [SMALL_STATE(115)] = 2622,
  [SMALL_STATE(116)] = 2633,
  [SMALL_STATE(117)] = 2644,
  [SMALL_STATE(118)] = 2651,
  [SMALL_STATE(119)] = 2662,
  [SMALL_STATE(120)] = 2673,
  [SMALL_STATE(121)] = 2680,
  [SMALL_STATE(122)] = 2691,
  [SMALL_STATE(123)] = 2702,
  [SMALL_STATE(124)] = 2713,
  [SMALL_STATE(125)] = 2720,
  [SMALL_STATE(126)] = 2731,
  [SMALL_STATE(127)] = 2738,
  [SMALL_STATE(128)] = 2745,
  [SMALL_STATE(129)] = 2754,
  [SMALL_STATE(130)] = 2765,
  [SMALL_STATE(131)] = 2773,
  [SMALL_STATE(132)] = 2779,
  [SMALL_STATE(133)] = 2787,
  [SMALL_STATE(134)] = 2793,
  [SMALL_STATE(135)] = 2799,
  [SMALL_STATE(136)] = 2807,
  [SMALL_STATE(137)] = 2815,
  [SMALL_STATE(138)] = 2823,
  [SMALL_STATE(139)] = 2831,
  [SMALL_STATE(140)] = 2839,
  [SMALL_STATE(141)] = 2847,
  [SMALL_STATE(142)] = 2855,
  [SMALL_STATE(143)] = 2863,
  [SMALL_STATE(144)] = 2871,
  [SMALL_STATE(145)] = 2879,
  [SMALL_STATE(146)] = 2887,
  [SMALL_STATE(147)] = 2895,
  [SMALL_STATE(148)] = 2901,
  [SMALL_STATE(149)] = 2909,
  [SMALL_STATE(150)] = 2917,
  [SMALL_STATE(151)] = 2925,
  [SMALL_STATE(152)] = 2933,
  [SMALL_STATE(153)] = 2941,
  [SMALL_STATE(154)] = 2949,
  [SMALL_STATE(155)] = 2957,
  [SMALL_STATE(156)] = 2967,
  [SMALL_STATE(157)] = 2973,
  [SMALL_STATE(158)] = 2981,
  [SMALL_STATE(159)] = 2989,
  [SMALL_STATE(160)] = 2995,
  [SMALL_STATE(161)] = 3001,
  [SMALL_STATE(162)] = 3009,
  [SMALL_STATE(163)] = 3017,
  [SMALL_STATE(164)] = 3023,
  [SMALL_STATE(165)] = 3028,
  [SMALL_STATE(166)] = 3033,
  [SMALL_STATE(167)] = 3040,
  [SMALL_STATE(168)] = 3045,
  [SMALL_STATE(169)] = 3050,
  [SMALL_STATE(170)] = 3055,
  [SMALL_STATE(171)] = 3060,
  [SMALL_STATE(172)] = 3067,
  [SMALL_STATE(173)] = 3072,
  [SMALL_STATE(174)] = 3077,
  [SMALL_STATE(175)] = 3082,
  [SMALL_STATE(176)] = 3089,
  [SMALL_STATE(177)] = 3094,
  [SMALL_STATE(178)] = 3101,
  [SMALL_STATE(179)] = 3106,
  [SMALL_STATE(180)] = 3113,
  [SMALL_STATE(181)] = 3118,
  [SMALL_STATE(182)] = 3123,
  [SMALL_STATE(183)] = 3128,
  [SMALL_STATE(184)] = 3132,
  [SMALL_STATE(185)] = 3136,
  [SMALL_STATE(186)] = 3140,
  [SMALL_STATE(187)] = 3144,
  [SMALL_STATE(188)] = 3148,
  [SMALL_STATE(189)] = 3152,
  [SMALL_STATE(190)] = 3156,
  [SMALL_STATE(191)] = 3160,
  [SMALL_STATE(192)] = 3164,
  [SMALL_STATE(193)] = 3168,
  [SMALL_STATE(194)] = 3172,
  [SMALL_STATE(195)] = 3176,
  [SMALL_STATE(196)] = 3180,
  [SMALL_STATE(197)] = 3184,
  [SMALL_STATE(198)] = 3188,
  [SMALL_STATE(199)] = 3192,
  [SMALL_STATE(200)] = 3196,
  [SMALL_STATE(201)] = 3200,
  [SMALL_STATE(202)] = 3204,
  [SMALL_STATE(203)] = 3208,
  [SMALL_STATE(204)] = 3212,
  [SMALL_STATE(205)] = 3216,
  [SMALL_STATE(206)] = 3220,
  [SMALL_STATE(207)] = 3224,
  [SMALL_STATE(208)] = 3228,
  [SMALL_STATE(209)] = 3232,
  [SMALL_STATE(210)] = 3236,
  [SMALL_STATE(211)] = 3240,
  [SMALL_STATE(212)] = 3244,
  [SMALL_STATE(213)] = 3248,
  [SMALL_STATE(214)] = 3252,
  [SMALL_STATE(215)] = 3256,
  [SMALL_STATE(216)] = 3260,
  [SMALL_STATE(217)] = 3264,
  [SMALL_STATE(218)] = 3268,
  [SMALL_STATE(219)] = 3272,
  [SMALL_STATE(220)] = 3276,
  [SMALL_STATE(221)] = 3280,
  [SMALL_STATE(222)] = 3284,
  [SMALL_STATE(223)] = 3288,
  [SMALL_STATE(224)] = 3292,
  [SMALL_STATE(225)] = 3296,
  [SMALL_STATE(226)] = 3300,
  [SMALL_STATE(227)] = 3304,
  [SMALL_STATE(228)] = 3308,
  [SMALL_STATE(229)] = 3312,
  [SMALL_STATE(230)] = 3316,
  [SMALL_STATE(231)] = 3320,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_s_expr_repeat1, 2), SHIFT_REPEAT(8),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_s_expr_repeat1, 2), SHIFT_REPEAT(219),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_s_expr_repeat1, 2), SHIFT_REPEAT(220),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_s_expr_repeat1, 2), SHIFT_REPEAT(226),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_s_expr_repeat1, 2), SHIFT_REPEAT(10),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_s_expr_repeat1, 2), SHIFT_REPEAT(12),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_s_expr_repeat1, 2), SHIFT_REPEAT(12),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_s_expr_repeat1, 2), SHIFT_REPEAT(221),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_s_expr_repeat1, 2), SHIFT_REPEAT(4),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_s_expr_repeat1, 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeral, 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeral, 1),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spec_constant, 1),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spec_constant, 1),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reserved, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reserved, 1),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_s_expr, 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s_expr, 2),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_s_expr, 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s_expr, 1),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary, 2),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary, 2),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hexadecimal, 2),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hexadecimal, 2),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal, 3),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 3),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 2),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_s_expr, 3),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s_expr, 3),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(44),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(208),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(207),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(206),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(56),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(56),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(36),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_term_repeat1, 2),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 7),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 7),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 5),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 5),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 1),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qual_identifier, 1),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qual_identifier, 1),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 4),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 4),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qual_identifier, 5),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qual_identifier, 5),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 5),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 5),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [267] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(94),
  [270] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(56),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(56),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sort_repeat1, 2), SHIFT_REPEAT(92),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sort_repeat1, 2), SHIFT_REPEAT(77),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sort_repeat1, 2),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sort, 4),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sort, 4),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 3),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 3),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sort, 1),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sort, 1),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 1),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [318] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(92),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(209),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(224),
  [341] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_term_repeat5, 2), SHIFT_REPEAT(184),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_term_repeat5, 2),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index, 1),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 1),
  [363] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pattern_repeat1, 2), SHIFT_REPEAT(92),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pattern_repeat1, 2),
  [368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datatype_dec_repeat1, 2), SHIFT_REPEAT(144),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_datatype_dec_repeat1, 2),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat3, 2), SHIFT_REPEAT(121),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat3, 2),
  [380] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_term_repeat2, 2), SHIFT_REPEAT(132),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_term_repeat2, 2),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [391] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constructor_dec_repeat1, 2), SHIFT_REPEAT(162),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constructor_dec_repeat1, 2),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [400] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(157),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 2),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prop_literal, 4),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [415] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_term_repeat3, 2), SHIFT_REPEAT(141),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_term_repeat3, 2),
  [420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_term_repeat4, 2), SHIFT_REPEAT(87),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_term_repeat4, 2),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prop_literal, 1),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 5),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 6),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 9),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 8),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 4),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 7),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_value, 1),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_dec, 3),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_dec, 9),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sort_dec, 4),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_dec, 4),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_value, 2),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_case, 4),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_value, 3),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_binding, 4),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorted_var, 4),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_dec, 3),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_dec, 4),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_info_flag, 1),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_def, 6),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_def, 5),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 1),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 2),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_b_value, 1),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [591] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_smtlib2(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif