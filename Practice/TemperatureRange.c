/*
 * Temperature Range
 * Idea: swimming is fine when 70 < temp < 90 (both bounds exclusive).
 * Time: O(1) | Space: O(1)
 */

#include <stdio.h>
int main() {
  int temp;
  printf("Enter your current temperature in Farenheit: ");
  scanf("%d", &temp);
  if (temp > 70 && temp < 90) {
    printf("Yes, you can swim.");
  } else {
    printf("No, you can't swim.");
  }
  return 0;
}