/*
 * Leap Year
 * Idea: a year is leap if divisible by 400, or divisible by 4 but not by 100.
 * Time: O(1) | Space: O(1)
 */

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