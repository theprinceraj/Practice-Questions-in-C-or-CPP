/*
 * Pattern 2 (Advanced set): Number Pyramid 1..row..1
 * Idea: each row prints blank pairs, counts up 1..row, then back down row-1..1.
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