use clap::Parser;
use std::path::PathBuf;

#[derive(Debug, Parser)]
#[command(name = "smtx")]
#[command(about = "A Robust SMT-LIB Static Validator", long_about = None)]
#[command(version)]
struct Cli {
    // The input file to compile
    #[arg(short, long, value_name = "FILE", num_args = 1.., required = true)]
    compile: Vec<PathBuf>,
}

fn main() {
    let cli = Cli::parse();
    let source_files = cli.compile;

    smtx_lib::compiler::compile(&source_files);
}
