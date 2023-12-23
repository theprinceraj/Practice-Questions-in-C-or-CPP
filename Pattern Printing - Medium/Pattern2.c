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