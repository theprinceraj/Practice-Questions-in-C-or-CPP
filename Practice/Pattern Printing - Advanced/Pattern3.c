/*
 * Pattern 3 (Advanced set): Star Parallelogram
 * Idea: each row has n - row + 1 blank pairs, then a constant run of 2n + 1 stars, so the block slants.
 * Time: O(n^2) | Space: O(1)
 */

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