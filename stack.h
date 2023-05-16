#ifndef stack_h
#define stack_h

typedef struct stack Stack;
typedef float real;

Stack *new_stack(int size);
void stack_push(Stack *s, real value);
int stack_pop(Stack *s);
void stack_print(Stack *s);

#endif
