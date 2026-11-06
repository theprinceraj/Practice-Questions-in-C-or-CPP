/*
 * Pattern 10 (Advanced set): Number Pyramid 1 to 2*row-1
 * Idea: each row prints row..n blank pairs, then the numbers 1 to 2 * row - 1.
 * Time: O(n^2) | Space: O(1)
 */

#include <stdio.h>
int main() {

  int n;
  printf("Enter a number: ");
  scanf("%d", &n);

  for (int row = 1; row <= n; row++) {
    for (int sp = row; sp <= n; sp++) {
      printf("  ");
    }
    for (int n = 1; n <= 2 * row - 1; n++) {
      printf("%d ", n);
    }
    printf("\n");
  }
}