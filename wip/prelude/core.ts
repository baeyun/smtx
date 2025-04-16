// SMT-LIB2 prelude
// https://github.com/stanford-oval/node-smtlib/blob/master/lib/smtlib.ts
export class Value {}
export interface Bool extends Boolean {}
export interface Int extends Number {}
export interface Real extends Number {}
export interface Float extends Number {}
export interface Double extends Number {}
export interface Rational extends Number {}
export interface Complex extends Number {}
export interface BitVector<T = Int> extends Array<T> {}
export interface List<T> extends Array<T> {}
export interface Tuple<T> extends Array<T> {}
export interface Record extends Object {}
// export interface Array<T> extends Array<T> {};
// export interface Set<T> extends Array<T> {}
// export interface Map<K, V> extends Object {}
// export interface String extends String {};
export interface Char extends String {}
// export interface Function extends Function {};
export interface Symbol extends String {}

// SMT Logic types
export type Logic =
  | "AUFLIA"
  | "AUFLIRA"
  | "AUFNIRA"
  | "LIA"
  | "LRA"
  | "QF_ABV"
  | "QF_AUFBV"
  | "QF_AUFLIA"
  | "QF_AX"
  | "QF_BV"
  | "QF_IDL"
  | "QF_LIA"
  | "QF_LRA"
  | "QF_NIA"
  | "QF_NRA"
  | "QF_RDL"
  | "QF_UF"
  | "QF_UFBV"
  | "QF_UFIDL"
  | "QF_UFLIA"
  | "QF_UFLRA"
  | "QF_UFNRA"
  | "UFLRA"
  | "UFNIA";

// OptionValueMap: Map each option to its allowed value type
type Option = {
  produce_models?: boolean;
  produce_proofs?: boolean;
  produce_unsat_cores?: boolean;
  produce_interpolants?: boolean;
  produce_assignments?: boolean;
  produce_models_on_timeout?: boolean;
  produce_proofs_on_timeout?: boolean;
  produce_unsat_cores_on_timeout?: boolean;
  produce_interpolants_on_timeout?: boolean;
  produce_assignments_on_timeout?: boolean;
  print_success?: boolean;
  print_fail?: boolean;
  global_decls?: boolean;
  expand_definitions?: boolean;
  interactive_mode?: boolean;
  incremental?: boolean;
  random_seed?: Int;
  verbosity?: Int;
  diagnostic_output_channel?: string;
  regular_output_channel?: string;
};

export function set_logic(logic: Logic): void {}
export function set_option(option: Option): void {}
export function set_info(info: string, value: string): void {}
export function assert(expr: any): void {}
export function check_sat(): void {}
export function exit(): void {}
export function get_value(expr: any): void {}
export function get_assignment(): void {}
export function get_option(option: string): void {}
export function get_info(info: string): void {}
export function get_proof(): void {}
export function get_unsat_core(): void {}
export function get_assertions(): void {}
export function get_statistics(): void {}
export function and(...args: Value[]): Value {
  return new Value();
}
export function or(...args: Value[]): Value {
  return new Value();
}
export function not(expr: Value): Value {
  return new Value();
}
export function eq(lhs: Value, rhs: Value): Bool {
  return new Boolean();
}
export function neq(lhs: Value, rhs: Value): Bool {
  return new Boolean();
}
export function leq(lhs: Value, rhs: Value): Bool {
  return new Boolean();
}
export function geq(lhs: Value, rhs: Value): Bool {
  return new Boolean();
}
export function lt(lhs: Value, rhs: Value): Bool {
  return new Boolean();
}
export function gt(lhs: Value, rhs: Value): Bool {
  return new Boolean();
}
export function set_type(elementType: Value): String {
  return new String();
}

// Math
export function add(lhs: Value, rhs: Value): Value {
  return new Value();
}

export function sub(lhs: Value, rhs: Value): Value {
  return new Value();
}

export function mul(lhs: Value, rhs: Value): Value {
  return new Value();
}

export function div(lhs: Value, rhs: Value): Value {
  return new Value();
}

export function mod(lhs: Value, rhs: Value): Value {
  return new Value();
}

export function pow(lhs: Value, rhs: Value): Value {
  return new Value();
}

export function sqrt(lhs: Value): Value {
  return new Value();
}

export function abs(lhs: Value): Value {
  return new Value();
}

export function neg(lhs: Value): Value {
  return new Value();
}

export function max(lhs: Value, rhs: Value): Value {
  return new Value();
}

export function min(lhs: Value, rhs: Value): Value {
  return new Value();
}

export function round(lhs: Value): Value {
  return new Value();
}

export function floor(lhs: Value): Value {
  return new Value();
}

export function ceil(lhs: Value): Value {
  return new Value();
}

export function trunc(lhs: Value): Value {
  return new Value();
}

// Bitwise

export function band(lhs: Value, rhs: Value): Value {
  return new Value();
}

export function bor(lhs: Value, rhs: Value): Value {
  return new Value();
}

export function bxor(lhs: Value, rhs: Value): Value {
  return new Value();
}

export function bnot(lhs: Value): Value {
  return new Value();
}

export function shl(lhs: Value, rhs: Value): Value {
  return new Value();
}

export function lshr(lhs: Value, rhs: Value): Value {
  return new Value();
}

export function ashr(lhs: Value, rhs: Value): Value {
  return new Value();
}

// Array
export function select(array: Value, index: Value): Value {
  return new Value();
}

export function store(array: Value, index: Value, value: Value): Value {
  return new Value();
}

// export function array_sort(index: Value, element: Value): Value {}
// export function array_select(array: Value, index: Value): Value {}

// export function array_store(array: Value, index: Value, value: Value): Value {}

// export function array_const(element: Value): Value {}

// export function array_map(f: Value, array: Value): Value {}

// export function array_update(array: Value, index: Value, value: Value): Value {}

// export function array_concat(array1: Value, array2: Value): Value {}

// export function array_extract(array: Value, offset: Value, length: Value): Value {}

// export function array_extend(array: Value, value: Value): Value {}

// export function array_reverse(array: Value): Value {}

// export function array_rotate(array: Value, offset: Value): Value {}

// export function array_slice(array: Value, offset: Value, length: Value): Value {}

// export function array_sort(array: Value): Value {}

// export function array_uniq(array: Value): Value {}

// export function array_zip(arrays: Value[]): Value {}

// export function array_unzip(array: Value): Value {}

// export function array_product(array: Value): Value {}

// export function array_sum(array: Value): Value {}

// export function array_max(array: Value): Value {}

// export function array_min(array: Value): Value {}

// export function array_avg(array: Value): Value {}

// export function array_median(array: Value): Value {}

// export function array_mode(array: Value): Value {}

// export function array_range(array: Value): Value {}

// export function array_length(array: Value): Value {}

// export function array_empty(array: Value): Value {}

// export function array_is_empty(array: Value): Value {}

// export function array_is_singleton(array: Value): Value {}

// export function array_is_pair(array: Value): Value {}

// export function array_is_sorted(array: Value): Value {}

// export function array_is_distinct(array: Value): Value {}

// export function array_is_permutation(array: Value): Value {}

// export function array_is_subset(array1: Value, array2: Value): Value {}

// export function array_is_superset(array1: Value, array2: Value): Value {}

// export function array_is_subset_eq(array1: Value, array2: Value): Value {}

// export function array_is_superset_eq(array1: Value, array2: Value): Value {}

// export function array_eq(array1: Value, array2: Value): Value {}

// export function array_neq(array1: Value, array2: Value): Value {}

// export function array_lt(array1: Value, array2: Value): Value {}

// export function array_le(array1: Value, array2: Value): Value {}

// export function array_gt(array1: Value, array2: Value): Value {}

// export function array_ge(array1: Value, array2: Value): Value {}

// export function array_add(array1: Value, array2: Value): Value {}

// export function array_sub(array1: Value, array2: Value): Value {}

// export function array_mul(array1: Value, array2: Value): Value {}

// export function array_div(array1: Value, array2: Value): Value {}

// export function array_mod(array1: Value, array2: Value): Value {}

// export function array_pow(array1: Value, array2: Value): Value {}

// export function array_sqrt(array: Value): Value {}

// export function array_abs(array: Value): Value {}

// export function array_neg(array: Value): Value {}

// export function array_max(array: Value): Value {}

// export function array_min(array: Value): Value {}

// export function array_round(array: Value): Value {}

// export function array_floor(array: Value): Value {}

// export function array_ceil(array: Value): Value {}

// export function array_trunc(array: Value): Value {}

// export function array_band(array1: Value, array2: Value): Value {}

// export function array_bor(array1: Value, array2: Value): Value {}

// export function array_bxor(array1: Value, array2: Value): Value {}

// export function array_bnot(array: Value): Value {}

// export function array_shl(array1: Value, array2: Value): Value {}

// export function array_lshr(array1: Value, array2: Value): Value {}

// export function array_ashr(array1: Value, array2: Value): Value {}

// export function array_eq(array1: Value, array2: Value): Value {}

// export function array_neq(array1: Value, array2: Value): Value {}

// export function array_lt(array1: Value, array2: Value): Value {}

// export function array_le(array1: Value, array2: Value): Value {}

// export function array_gt(array1: Value, array2: Value): Value {}

// export function array_ge(array1: Value, array2: Value): Value {}

// export function array_and(array1: Value, array2: Value): Value {}

// export function array_or(array1: Value, array2: Value): Value {}

// export function array_not(array: Value): Value {}

// export function array_implies(array1: Value, array2: Value): Value {}

// export function array_iff(array1: Value, array2: Value): Value {}

// export function array_xor(array1: Value, array2: Value): Value {}

// export function array_ite(cond: Value, array1: Value, array2: Value): Value {}

// export function array_let(bindings: Value[], array: Value): Value {}

// export function array_lambda(params: Value[], array: Value): Value {}

// @TODO - Implement these logics
// Set
// Map
// String
// Char
// Function
// Symbol

// export function string_literal(str: string): Value {return stringEscape(str);}
// export function named(name: Value, expr: Value): SExpr {return new SExpr("!", expr, ":named", name);}
// export function declare_const(name: string, type: any) {}
// export function declare_fun(name: string, params: any[], type: any) {}
// export function define_fun(name: string, params: any[], type: any, body: any) {}
// export function define_fun_rec(name: string, params: any[], type: any, body: any) {}
// export function define_funs_rec(decls: any[], bodies: any[]) {}

// export function declare_datatype(name : string, constructors : Value[]) : SExpr {}
// export function declare_sort(name : string) : SExpr {}
// export function declare_fun(name : string, args : Value[], ret : Value) : SExpr {}
// export function define_fun(name : string, args : Value[], ret : Value, def : Value) : SExpr {}
// export function predicate(pred : Value, ...args : Value[]) : Value {}
// export function implies(lhs : Value, rhs : Value) : SExpr {}
