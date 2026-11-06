/*
 * Pattern 4 (Advanced set): 5 x 5 Block of '='
 * Idea: nested loops print a fixed 5 x 5 grid of '=' (the input of n is commented out).
 * Time: O(1) fixed size | Space: O(1)
 */

#include <stdio.h>

int main() {

  int n;
//   printf("Enter value of 'n': ");
//   scanf("%d", &n);

  for (int row = 1; row <= 5; row++) {
    for (int col = 5; col >= 1; col--) {
      printf("=");
    }
    
    printf("\n");
  }

  return 0;
}