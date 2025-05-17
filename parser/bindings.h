#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

typedef struct BufferResult {
  uintptr_t len;
  const uint8_t *ptr;
} BufferResult;

struct BufferResult get_buffer(void);
