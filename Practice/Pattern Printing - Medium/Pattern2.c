/*
 * Pattern 2 (Medium set): Right-aligned Alphabet Triangle
 * Idea: fixed 5 rows, each with 5 - row spaces then the letters A up to the row's letter (the n read is unused).
 * Time: O(1) fixed size | Space: O(1)
 */

#include <stdio.h>
int main() {
  int n;
  printf("Enter value of 'n': ");
  scanf("%d", &n);
  printf("Received value: %d\n", n);
  for (int row = 1; row <= 5; row++) {
    for (int j = 1; j <= 5 - row; j++) {
      printf(" ");
    }
    for (char k = 'A'; k <= 'A' + row - 1; k++) {
      printf("%c", k);
    }
    printf("\n");
  }
  return 0;
}