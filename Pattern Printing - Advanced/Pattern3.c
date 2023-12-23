#include <stdio.h>

int main() {

  int n;
  printf("Enter value of 'n': ");
  scanf("%d", &n);

  for (int row = 1; row <= n; row++) {
    for (int col = n; col >= row; col--) {
      printf("  ");
    }
    for (int col = 1; col <= row; col++) {
      printf("* ");
    }
    for (int col = 1; col <= n; col++) {
      printf("* ");
    }
    for (int col = n; col >= row; col--) {
      printf("* ");
    }
    printf("\n");
  }

  return 0;
}