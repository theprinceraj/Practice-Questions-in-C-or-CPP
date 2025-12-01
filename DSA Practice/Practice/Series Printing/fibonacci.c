#include <stdio.h>

void printFibonacci(int n);

int main() {

  int n;
  printf("Enter the value of \"n\": ");
  scanf("%d", &n);

  printFibonacci(n);
}

void printFibonacci(int n) {
  int t1 = 0, t2 = 1;
  int nextTerm = t1 + t2;
  printf("Fibonacci Series till %d: %d %d ", n, t1, t2);
  for (int i = 3; i <= n; i++) {
    printf("%d ", nextTerm);
    t1 = t2, t2 = nextTerm;
    nextTerm = t1 + t2;
  }
}