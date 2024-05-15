#include <stdio.h>
#define clearconsole()                                                         \
  printf("\e[1;1H\e[2J");                                                      \
  ;
int main() {
  int k;
  printf("Enter a number: ");
  scanf("%d", &k);
  clearconsole();

  int count = 0;
  while (k >= 5) {
    count += k / 5;
    k = k / 5;
  }
  printf("Number of trailing zeroes in %d: %d", k, count);
}