/*
 * Pattern 1 (Advanced set): Star Pyramid
 * Idea: each row prints n - row blank pairs, then row + (row - 1) stars.
 * Time: O(n^2) | Space: O(1)
 */

#include <stdio.h>

int main() {
  int n;
  printf("Enter value of 'n': ");
  scanf("%d", &n);
  for (int row = 1; row <= n; row++) {
    for (int space = 1; space <= n - row; space++) {
      printf("  ");
    }
    for (int star = row; star >= 1; star--) {
      printf("* ");
    }
    for (int star = 1; star <= row - 1; star++) {
      printf("* ");
    }
    printf("\n");
  }
  return 0;
}