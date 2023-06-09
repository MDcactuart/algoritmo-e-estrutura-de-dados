#include "interpret.h"
#include "stack.h"
#include <stdio.h>

static void repl() {
  char line[1024];
  for (;;) {
    printf("> ");

    if (!fgets(line, sizeof(line), stdin)) {
      printf("\n");
      break;
    }

    interpret(line);
  }
}

int main() {
  interpret_int();
  repl();
  return 0;
}
