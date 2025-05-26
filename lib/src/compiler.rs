use aws_smt_ir::{
    Command
};
use crate::{parser::parse, reader};

// type Command = aws_smt_ir::Command<aws_smt_ir::logic::ALL>;

pub fn compile(source_files: &Vec<std::path::PathBuf>) {
    for source_file in source_files {
        compile_source(&source_file);
    }
}

pub fn compile_source(source_file: &std::path::PathBuf) {
    let file_content = reader(source_file).unwrap();
    let commands: Vec<Command<_>> = parse(file_content)
        .expect("Failed to parse SMT-LIB file")
        .collect();

    // println!("IR Representation:");
    for command in &commands {
        match command {
            Command::SetLogic { symbol } => {
                println!("SetLogic: {}", symbol);
            }
            Command::Assert { term } => {
                println!("Assert: {}", term);
            }
            // Command::CheckSat => {
            //     println!("CheckSat");
            // }
            // Command::GetModel => {
            //     println!("GetModel");
            // }
            _ => {
                // println!("  {:?}", command);
            }
        }
    }
    // println!("Compilation successful!");
}
