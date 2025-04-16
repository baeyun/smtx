import { Value } from "./core";

// re-export all of core.ts
export * from "./core";

// Override the add function
export function add(lhs: Value, rhs: Value): Value {
  return new Value();
}

type StdArray<T> = T[];

export class Array extends Value {
  constructor() {
    super();
  }

  static create(index: StdArray<Value>): Value {
    return new Value();
  }
}
