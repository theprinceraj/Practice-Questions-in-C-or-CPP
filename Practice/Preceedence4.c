/*
 * Operator Precedence: Program 4
 * Idea: + and - bind tighter than >>, so it is 98 >> 72, a shift count past the int width (undefined behavior in C).
 * Time: O(1) | Space: O(1)
 */

#include <stdio.h>
int main() {
  printf("Preceedence Program 4\n");

  int x = 14 - 8 + 92 >> 2 + 70;
  printf("%d\n", x);
  
  if (14 - 8 + 92 >> 2 + 70) {
    printf("Yes!");
  } else {
    printf("No!");
  }
  return 0;
}