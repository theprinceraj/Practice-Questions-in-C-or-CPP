#include <stdio.h>
int leapYear(int year) {
  if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
    return 1;
  return 0;
}

int main() {
  printf("%d", leapYear(2100));
  return 0;
}