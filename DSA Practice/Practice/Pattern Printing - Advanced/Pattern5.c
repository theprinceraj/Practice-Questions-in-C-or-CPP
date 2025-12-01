#include <stdio.h>
int main() {
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);

  for (int row = 1; row <= n; row++) {
    for (int col = 1; col <= row - 1; col++)
      printf("  ");
    for (int col = row; col <= n; col++)
      printf("* ");
    for (int col = row; col <= n - 1; col++)
      printf("* ");
    printf("\n");
  }

  return 0;
}