#include <stdio.h>
int main() {

  int n;
  printf("Enter a number: ");
  scanf("%d", &n);

  for (int row = 1; row <= n; row++) {
    for (int sp = row; sp <= n; sp++) {
      printf("  ");
    }
    for (int n = 1; n <= 2 * row - 1; n++) {
      printf("%d ", n);
    }
    printf("\n");
  }
}