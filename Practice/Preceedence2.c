/*
 * Operator Precedence: Program 2
 * Idea: - and * / bind tighter than <<, so the shift count is 2 - 16 = -14, a negative shift (undefined behavior in C).
 * Time: O(1) | Space: O(1)
 */

#include <stdio.h>
int main() {
  printf("Preceedence Program 2\n");

  int x = 6 << 2 - 4 * 8 / 2;
  printf("%d\n", x);

  if (6 << 2 - 4 * 8 / 2) {
    printf("Yes!");
  } else {
    printf("No!");
  }
  return 0;
}