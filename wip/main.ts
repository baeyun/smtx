// import ts, { factory } from "typescript";
import {
  ModuleKind,
  ModuleResolutionKind,
  Project,
  ScriptTarget,
} from "ts-morph";

const project = new Project({
  // useInMemoryFileSystem: true,
  // skipFileDependencyResolution: true,
  compilerOptions: {
    target: ScriptTarget.ESNext,
    module: ModuleKind.NodeNext,
    moduleResolution: ModuleResolutionKind.NodeNext,
    // allowImportingTsExtensions: true,
    strict: true,
    noImplicitAny: true,
  },
});

// project.addSourceFileAtPath("prelude/QF_LIA.ts");
// project.addSourceFileAtPath("QF_LIA.smt2.ts");

project.addSourceFileAtPath("prelude/QF_BV.ts");
project.addSourceFileAtPath("QF_BV.smt2.ts");

// const sourceFile = project.createSourceFile(
//   "smt.ts",
//   `import { BitVector } from "./prelude";\n\nlet x: BitVector<2> = "42";`
// );

// sourceFile.addStatements([`console.log("Hello, world!");`]);

project.resolveSourceFileDependencies();

const diagnostics = project.getPreEmitDiagnostics();

if (diagnostics.length) {
  console.log(project.formatDiagnosticsWithColorAndContext(diagnostics));
  process.exit(1);
} else console.log("✅ Type check successful");
