use aws_smt_ir::{
    Command as IRCommand,
    ParseError,
    Script,
    Term as IRTerm,
    // smt2writer::ToSmt2,
    logic::ALL,
};

type Term = IRTerm<ALL>;
type Command = IRCommand<Term>;

/// parse an smtlib query into an iterator of Commands
pub fn parse(
    smtlib: impl std::io::BufRead,
) -> Result<impl Iterator<Item = Command>, ParseError<ALL>> {
    Ok(Script::<Term>::parse(smtlib)?.into_iter())
}

// /// parse an smtlib query into an iterator of Commands
// pub fn parse(smtlib: impl std::io::BufRead) -> Result<Vec<Command>, aws_smt_ir::smt2parser::Error> {
//     let stream = CommandStream::new(
//         smtlib,
//         SyntaxBuilder,
//         // Some(file_path.to_string_lossy().into_owned()),
//         None,
//     );

//     stream.collect::<Result<Vec<_>, _>>()
// }
