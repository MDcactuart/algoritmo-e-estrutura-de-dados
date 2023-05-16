#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stack.h"
#include "interpret.h"


Stack *s = NULL;

void interpret_int() { s = new_stack(100); }
void interpret(const char *source) {

  char op[10];
  char arg[10];

  sscanf(source, "%s%s", op, arg);
  printf("operação: %s\n", op);
  printf("argumento: %s\n", arg);

  if (strcmp(op, "push") == 0) {
    real value = atof(arg);
    stack_push(s, value);

  } else if (strcmp(op, "add") == 0) {
    real arg1 = stack_pop(s);
    real arg2 = stack_pop(s);
    stack_push(s, arg1 + arg2);
  } else if (strcmp(op, "sub") == 0) {
    real arg1 = stack_pop(s);
    real arg2 = stack_pop(s);
    stack_push(s, arg1 - arg2);
  } else if (strcmp(op, "div") == 0) {
    real arg1 = stack_pop(s);
    real arg2 = stack_pop(s);
    stack_push(s, (arg1 / arg2));
  } else if (strcmp(op, "mul") == 0) {
    real arg1 = stack_pop(s);
    real arg2 = stack_pop(s);
    stack_push(s, (arg1 * arg2));
  }

  stack_print(s);
}
