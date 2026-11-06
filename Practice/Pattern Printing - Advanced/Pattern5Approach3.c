/*
 * Pattern 5, Approach 3 (Advanced set): Inverted Star Pyramid
 * Idea: count the blank pairs per row and print (2n - 1) minus twice that many stars.
 * Time: O(n^2) | Space: O(1)
 */

#include <stdio.h>
int main() {

  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  int totalColumns = 2 * n - 1;
  int spacePrintsSOFar = 0;
  for (int row = 1; row <= n; row++) {
    for (int space = 1; space < row; space++) {
      printf("  ");
      ++spacePrintsSOFar;
    }
    for (int star = 1; star <= totalColumns - (2 * spacePrintsSOFar); star++) {
      printf("* ");
    }
    spacePrintsSOFar = 0;
    printf("\n");
  }

  return 0;
}