#include <stdio.h>
int main() {
  printf("Preceedence Program 2\n");

  int x = 6 << 2 - 4 * 8 / 2;
  printf("%d\n", x);

  if (6 << 2 - 4 * 8 / 2) {
    printf("Yes!");
  } else {
    printf("No!");
  }
  return 0;
}