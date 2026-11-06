/*
 * Pattern 5 (Advanced set): Inverted Star Pyramid
 * Idea: each row prints row - 1 blank pairs, then (n - row + 1) + (n - row) stars.
 * Time: O(n^2) | Space: O(1)
 */

#include <stdio.h>
int main() {
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);

  for (int row = 1; row <= n; row++) {
    for (int col = 1; col <= row - 1; col++)
      printf("  ");
    for (int col = row; col <= n; col++)
      printf("* ");
    for (int col = row; col <= n - 1; col++)
      printf("* ");
    printf("\n");
  }

  return 0;
}