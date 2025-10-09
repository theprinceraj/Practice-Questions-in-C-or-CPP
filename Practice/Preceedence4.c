#include <stdio.h>
int main() {
  printf("Preceedence Program 4\n");

  int x = 14 - 8 + 92 >> 2 + 70;
  printf("%d\n", x);
  
  if (14 - 8 + 92 >> 2 + 70) {
    printf("Yes!");
  } else {
    printf("No!");
  }
  return 0;
}