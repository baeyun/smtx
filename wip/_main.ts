import ts, { factory as f } from "typescript";

function buildSource() {
  const functionName = f.createIdentifier("factorial");
  const paramName = f.createIdentifier("n");
  const parameter = f.createParameterDeclaration(
    undefined,
    undefined,
    paramName,
    undefined,
    f.createKeywordTypeNode(ts.SyntaxKind.NumberKeyword)
  );

  const condition = f.createBinaryExpression(
    paramName,
    ts.SyntaxKind.LessThanEqualsToken,
    f.createNumericLiteral(1)
  );
  const ifBody = f.createBlock(
    [f.createReturnStatement(f.createNumericLiteral(1))],
    true
  );

  const decrementedArg = f.createBinaryExpression(
    paramName,
    ts.SyntaxKind.MinusToken,
    f.createNumericLiteral(1)
  );
  const recurse = f.createBinaryExpression(
    paramName,
    ts.SyntaxKind.AsteriskToken,
    f.createCallExpression(functionName, /*typeArgs*/ undefined, [
      decrementedArg,
    ])
  );
  const statements = [
    f.createIfStatement(condition, ifBody),
    f.createReturnStatement(recurse),
  ];

  return f.createFunctionDeclaration(
    [f.createToken(ts.SyntaxKind.ExportKeyword)],
    undefined,
    functionName,
    undefined,
    [parameter],
    f.createKeywordTypeNode(ts.SyntaxKind.NumberKeyword),
    f.createBlock(statements, true)
  );
}

const sourceFile = f.createSourceFile(
  [buildSource()],
  f.createToken(ts.SyntaxKind.EndOfFileToken),
  ts.NodeFlags.None
);
sourceFile.fileName = "sample.ts";
sourceFile.text = `export function factorial(n: number): number {
      if (n <= 1) {
          return 1;
      }
      return n * factorial(n - 1);
  }`;

printSource(sourceFile);

function printSource(sourceFile: ts.SourceFile) {
  const printer = ts.createPrinter({ newLine: ts.NewLineKind.LineFeed });
  const result = printer.printNode(
    ts.EmitHint.Unspecified,
    sourceFile,
    sourceFile
  );
  console.log(result);
}

function compile(fileNames: string[], options?: ts.CompilerOptions): void {
  let program = ts.createProgram(fileNames, {
    noEmitOnError: true,
    noImplicitAny: true,
    target: ts.ScriptTarget.ES5,
    module: ts.ModuleKind.CommonJS,
    ...options,
  });
  let emitResult = program.emit();

  let allDiagnostics = ts
    .getPreEmitDiagnostics(program)
    .concat(emitResult.diagnostics);

  allDiagnostics.forEach((diagnostic) => {
    if (diagnostic.file) {
      let { line, character } = ts.getLineAndCharacterOfPosition(
        diagnostic.file,
        diagnostic.start!
      );
      let message = ts.flattenDiagnosticMessageText(
        diagnostic.messageText,
        "\n"
      );
      console.log(
        `${diagnostic.file.fileName} (${line + 1},${character + 1}): ${message}`
      );
    } else {
      console.log(
        ts.flattenDiagnosticMessageText(diagnostic.messageText, "\n")
      );
    }
  });

  let exitCode = emitResult.emitSkipped ? 1 : 0;
  console.log(`Process exiting with code '${exitCode}'.`);
  process.exit(exitCode);
}
