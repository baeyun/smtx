#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

typedef struct String String;

typedef struct Animal {
  struct String *name;
  uint8_t age;
} Animal;

void greet(void);

uint64_t add(uint64_t left, uint64_t right);

uint64_t fib(uint64_t n);

const struct Animal *create_animal(void);
