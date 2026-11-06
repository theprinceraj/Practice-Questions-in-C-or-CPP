/*
 * Teenage Check
 * Idea: a teenager is an age with 13 <= age <= 19.
 * Time: O(1) | Space: O(1)
 */

#include <stdio.h>
int main() {

  int age;
  printf("Enter your age: ");
  scanf("%d", &age);

  if (age >= 13 && age <= 19) {
    printf("Yep, you are a teenager.");
  } else {
    printf("No, you are not a teenager.");
  }

  return 0;
}