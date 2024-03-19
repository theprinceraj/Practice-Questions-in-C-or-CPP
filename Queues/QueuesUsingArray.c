#include <stdio.h>
#include <stdlib.h>
struct Queue {
  int *arr;
  int size;
  int f;
  int r;
};

int isFull(struct Queue *q) {
  if ((q->r + 1) % q->size == q->f) {
    return 1;
  }
  return 0;
}

int isEmpty(struct Queue *q) {
  if (q->f == q->r) {
    return 1;
  }
  return 0;
}

int enqueue(struct Queue *q, int val) {
  if (isFull(q)) {
    printf("Queue overflow.");
    return 0;
  }
  q->r = (q->r + 1) % q->size;
  q->arr[q->r] = val;
  return 1;
}

int dequeue(struct Queue *q) {
  if (isEmpty(q)) {
    printf("Queue underflow.");
    return 0;
  }
  q->f = (q->f + 1) % q->size;
  int val = q->arr[q->f];
  return val;
}

int main() {
  struct Queue q;
  int n;
  printf("Enter the value of \"n\": ");
  scanf("%d", &n);
  q.size = n;
  q.arr = (int *)malloc(sizeof(int) * n);
  q.f = -1;
  q.r = -1;
  for (int i = 0; i < n; i++) {
    int temp;
    printf("Enter value at position %d: ", i);
    scanf("%d", &temp);
    enqueue(&q, temp);
  }
  if (isFull(&q)) {
    printf("\nQueue is full\n");
  } else {
    printf("\nQueue is not full\n");
  }
  if (isEmpty(&q)) {
    printf("\nQueue is empty\n");
  } else {
    printf("\nQueue is not empty\n");
  }

  int choice;
  printf("\nType 1 if you want to dequeue and type 0 if you want to exit: ");
  scanf("%d", &choice);
  switch (choice) {
  case 1: {
    int val = dequeue(&q);
    printf("\n%d was dequeued from the queue.\n", val);
    break;
  }
  case 0:
    return 0;
  default:
    printf("Inavlid entry. Exiting...");
    return 0;
  }
}
