/*
 * Number Compare
 * Idea: print Yes if the first number is greater than either of the other two (a > b || a > c).
 * Time: O(1) | Space: O(1)
 */

#include <stdio.h>
int main() {
  int a, b, c;
  printf("Kindly enter three numbers with one space between them: ");
  scanf("%d %d %d", &a, &b, &c);

  if (a > b || a > c) {
    printf("Yes!");
  } else {
    printf("No!");
  }

  return 0;
}