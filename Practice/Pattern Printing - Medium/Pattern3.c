/*
 * Pattern 3 (Medium set): Right-aligned Descending Number Triangle
 * Idea: fixed 5 rows, each with 5 - row spaces then row down to 1.
 * Time: O(1) fixed size | Space: O(1)
 */

#include <stdio.h>
int main() {
  for (int row = 1; row <= 5; row++) {
    for (int j = 1; j <= 5 - row; j++) {
      printf(" ");
    }
    for (int k = row; k >= 1; k--) {
      printf("%d", k);
    }
    printf("\n");
  }

  return 0;
}