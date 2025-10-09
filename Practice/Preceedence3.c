#include <stdio.h>
int main() {
  printf("Preceedence Program 3\n");

  int x = 5 > 4 < 3 / 2 - 8 % 4 + 5;
  printf("%d\n", x);
  
  if (5 > 4 < 3 / 2 - 8 % 4 + 5) {
    printf("Yes");
  } else {
    printf("No");
  }
  return 0;
}