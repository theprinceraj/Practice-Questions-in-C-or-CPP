#include <stdio.h>
int main() {

  int n;
  printf("Enter a number: ");
  scanf("%d", &n);

  for (int row = 1; row <= n; row++) {
    for (int sp = row; sp <= n; sp++) {
      printf("  ");
    }
    for (int ch = 65; ch <= 64 + row; ch++) {
      printf("%c ", ch);
    }
    for (int ch = 63 + row; ch >= 65; ch--) {
      printf("%c ", ch);
    }
    printf("\n");
  }

  return 0;
}