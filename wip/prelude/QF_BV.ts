import { Value } from "./core";

// re-export all of core.ts
export * from "./core";

// type aliase for the standard array
type StdArray<T> = T[];

export interface BitVector<T extends number> extends StdArray<T> {}

export class Array extends Value {
  constructor() {
    super();
  }

  static create(index: StdArray<Value>): Value {
    return new Value();
  }
}
