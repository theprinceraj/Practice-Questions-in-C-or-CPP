/*
 * Operator Precedence: Program 3
 * Idea: relational operators group left to right, so (5 > 4) < 6 gives 1 < 6, which is 1.
 * Time: O(1) | Space: O(1)
 */

#include <stdio.h>
int main() {
  printf("Preceedence Program 3\n");

  int x = 5 > 4 < 3 / 2 - 8 % 4 + 5;
  printf("%d\n", x);
  
  if (5 > 4 < 3 / 2 - 8 % 4 + 5) {
    printf("Yes");
  } else {
    printf("No");
  }
  return 0;
}