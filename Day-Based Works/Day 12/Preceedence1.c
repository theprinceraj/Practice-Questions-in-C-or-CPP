#include <stdio.h>
int main() {
  printf("Preceedence Program 1\n");

  int x = 2 * 3 - 48 == 5 / 4 * 6;
  printf("%d\n", x);

  if (2 * 3 - 48 == 5 / 4 * 6)
    printf("YES!");
  else
    printf("NO!");

  return 0;
}

// 2 * 3 - 0 / 4 * 6
// 2 * 3 - 0 * 6
// 6 - 0
// 6