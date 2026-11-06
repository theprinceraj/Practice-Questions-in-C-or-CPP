/*
 * Pattern 5, Approach 2 (Advanced set): Inverted Star Pyramid
 * Idea: loop the row from n down to 1, printing n - row blank pairs and 2 * row - 1 stars.
 * Time: O(n^2) | Space: O(1)
 */

#include <stdio.h>
int main() {

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

  for (int row = n; row >= 1; row--) {
    for (int space = n; space > row; space--) {
      printf("  ");
    }
    for (int star = 1; star <= 2 * (row)-1; star++) {
      printf("* ");
    }
    printf("\n");
  }

  return 0;
}