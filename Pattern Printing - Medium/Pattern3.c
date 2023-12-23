#include <stdio.h>
int main() {
  for (int row = 1; row <= 5; row++) {
    for (int j = 1; j <= 5 - row; j++) {
      printf(" ");
    }
    for (int k = row; k >= 1; k--) {
      printf("%d", k);
    }
    printf("\n");
  }

  return 0;
}