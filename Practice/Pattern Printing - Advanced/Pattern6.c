#include <stdio.h>
int main() {

  int n;
  printf("Enter a number: ");
  scanf("%d", &n);

  for (int row = 1; row <= n; row++) {
    for (int col = n; col >= row; col--) {
      printf("* ");
    }
    for (int sp = 1; sp <= row - 1; sp++) {
      printf("  ");
    }
    for (int sp = 1; sp <= row - 1; sp++) {
      printf("  ");
    }
    for (int col = n; col >= row; col--) {
      printf("* ");
    }
    printf("\n");
  }
  for (int row = 1; row <= n; row++) {
    for (int col = 1; col <= row; col++) {
      printf("* ");
    }
    for (int sp = row; sp < n; sp++) {
      printf("  ");
    }
    for (int sp = row; sp < n; sp++) {
      printf("  ");
    }
    for (int col = 1; col <= row; col++) {
      printf("* ");
    }
    printf("\n");
  }
  return 0;
}

// OUTPUT-
// Enter a number: 5 
// * * * * * * * * * * 
// * * * *     * * * * 
// * * *         * * *
// * *             * *
// *                 *
// *                 *
// * *             * *
// * * *         * * *
// * * * *     * * * *
// * * * * * * * * * *