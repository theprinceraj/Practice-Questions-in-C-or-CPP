#include <stdio.h>
int main() {

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

  for (int row = n; row >= 1; row--) {
    for (int space = n; space > row; space--) {
      printf("  ");
    }
    for (int star = 1; star <= 2 * (row)-1; star++) {
      printf("* ");
    }
    printf("\n");
  }

  return 0;
}