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