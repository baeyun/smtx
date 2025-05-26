pub mod compiler;
pub mod parser;

use aws_smt_ir::smt2parser::concrete::Command;
use std::{
    fs::{self, File},
    io::BufReader,
};
use std::{
    io::{self},
    path::Path,
};

pub fn write_smt2(commands: &Vec<Command>) -> String {
    let mut smt2 = String::new();
    for command in commands {
        smt2.push_str(&command.to_string());
        smt2.push('\n');
    }
    smt2
}

/// print smt ast
pub fn print_ast(commands: &Vec<Command>) {
    for command in commands {
        println!("{:#?}", command);
    }
}

/// read a file into a string
pub fn reader(path: &Path) -> Result<BufReader<File>, std::io::Error> {
    let file = fs::File::open(path).map_err(|e| {
        io::Error::new(e.kind(), format!("Unable to open file: {}", path.display()))
    })?;
    Ok(io::BufReader::new(file))
}
