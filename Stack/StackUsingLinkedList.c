#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node *next;
};

struct Stack {
  struct Node *top;
};

// Function to create a new node
struct Node *createNode(int data) {
  struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
  if (newNode == NULL) {
    printf("Memory allocation failed\n");
    exit(1);
  }
  newNode->data = data;
  newNode->next = NULL;
  return newNode;
}

// Function to create a new stack
struct Stack *createStack() {
  struct Stack *stack = (struct Stack *)malloc(sizeof(struct Stack));
  if (stack == NULL) {
    printf("Memory allocation failed\n");
    exit(1);
  }
  stack->top = NULL;
  return stack;
}

// Function to check if the stack is empty
int isEmpty(struct Stack *stack) { return (stack->top == NULL); }

// Function to push an element onto the stack
void push(struct Stack *stack, int data) {
  struct Node *newNode = createNode(data);
  newNode->next = stack->top;
  stack->top = newNode;
  printf("%d pushed to stack\n", data);
}

// Function to pop an element from the stack
int pop(struct Stack *stack) {
  if (isEmpty(stack)) {
    printf("Stack Underflow\n");
    exit(1);
  }
  struct Node *temp = stack->top;
  int data = temp->data;
  stack->top = temp->next;
  free(temp);
  return data;
}

// Function to return the top element of the stack without removing it
int peek(struct Stack *stack) {
  if (isEmpty(stack)) {
    printf("Stack is empty\n");
    exit(1);
  }
  return stack->top->data;
}

// Driver program to test the stack functions
int main() {
  struct Stack *stack = createStack();

  push(stack, 69);
  push(stack, 79);
  push(stack, 99);

  printf("%d popped\n", pop(stack));

  printf("Top element is %d\n", peek(stack));

  return 0;
}
