#include <stdio.h>
int main() {

  int n;
  printf("Enter a number: ");
  scanf("%d", &n);

  for (int row = 1; row <= n; row++) {
    for (int col = 1; col <= row; col++) {
      printf("* ");
    }
    for (int sp = 1; sp <= (2 * n) - (2 * row); sp++) {
      printf("  ");
    }
    for (int col = 1; col <= row; col++) {
      printf("* ");
    }
    printf("\n");
  }
  for (int row = 1; row <= n - 1; row++) {
    for (int str = row; str <= n - 1; str++) {
      printf("* ");
    }
    for (int sp = 1; sp <= 2 * row; sp++) {
      printf("  ");
    }
    for (int str = row; str <= n - 1; str++) {
      printf("* ");
    }
    printf("\n");
  }

  return 0;
}

// OUTPUT-
// *             *
// * *         * *
// * * *     * * *
// * * * * * * * *
// * * *     * * *
// * *         * *
// *             *