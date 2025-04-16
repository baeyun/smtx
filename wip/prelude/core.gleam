
import gleam/io

pub fn main() {
  io.println("Hello, Joe!")
}

pub type OptionKey {
  produce_unsat_cores
  produce_interpolants
  produce_assignments
  produce_models_on_timeout
  produce_proofs_on_timeout
  produce_unsat_cores_on_timeout
  produce_interpolants_on_timeout
  produce_assignments_on_timeout
  print_success
  print_fail
  global_decls
  expand_definitions
  interactive_mode
  incremental
  random_seed
  verbosity
  diagnostic_output_channel
  regular_output_channel
}

pub type OptionValue {
  Boolean
  Int
  String
}

pub type OptionMap {
  OptionMap(name: OptionKey, value: OptionValue)
}

pub fn set_option(_option: OptionMap) {
  Nil
}
