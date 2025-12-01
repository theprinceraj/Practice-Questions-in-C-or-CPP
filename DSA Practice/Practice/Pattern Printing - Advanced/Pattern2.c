#include <stdio.h>

int main() {
  int n;
  printf("Enter value of 'n': ");
  scanf("%d", &n);
  for (int row = 1; row <= n; row++) {
    for (int space = 1; space <= n - row; space++) {
      printf("  ");
    }
    for (int star = 1; star <= row; star++) {
      printf("%d ", star);
    }
    for (int star = row - 1; star >= 1; star--) {
      printf("%d ", star);
    }
    printf("\n");
  }
  return 0;
}