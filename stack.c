#include "stack.h"
#include <stdio.h>
#include <stdlib.h>

struct stack {
  int top;
  real *values;
};

Stack *new_stack(int size) {
  Stack *s = calloc(1, sizeof(Stack));
  s->values = calloc(size, sizeof(real));
  s->top = 0;
  return s;
}
void stack_push(Stack *s, real value) { s->values[s->top++] = value; }
int stack_pop(Stack *s) { return s->values[--s->top]; }

void stack_print(Stack *s) {
  printf("--------STACK-------\n");
  for (int i = s->top - 1; i >= 0; i--) {
    printf("%.2f\n", s->values[i]);
  }
  printf("--------STACK-------\n");
}
