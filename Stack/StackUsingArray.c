#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100 // Maximum size of the stack

struct Stack {
  int top;
  int array[MAX_SIZE];
};

// Function to create a new stack
struct Stack *createStack() {
  struct Stack *stack = (struct Stack *)malloc(sizeof(struct Stack));
  stack->top = -1;
  return stack;
}

// Function to check if the stack is empty
int isEmpty(struct Stack *stack) { return (stack->top == -1); }

// Function to push an element onto the stack
void push(struct Stack *stack, int item) {
  if (stack->top == MAX_SIZE - 1) {
    printf("Stack Overflow\n");
    return;
  }
  stack->array[++stack->top] = item;
  printf("%d pushed to stack\n", item);
}

// Function to pop an element from the stack
int pop(struct Stack *stack) {
  if (isEmpty(stack)) {
    printf("Stack Underflow\n");
    return -1;
  }
  return stack->array[stack->top--];
}

// Function to return the top element of the stack without removing it
int peek(struct Stack *stack) {
  if (isEmpty(stack)) {
    printf("Stack is empty\n");
    return -1;
  }
  return stack->array[stack->top];
}

// Driver program to test the stack functions
int main() {
  struct Stack *stack = createStack();

  push(stack, 10);
  push(stack, 69);
  push(stack, 99);

  printf("%d popped from stack\n", pop(stack));

  printf("Top element is %d\n", peek(stack));

  return 0;
}
