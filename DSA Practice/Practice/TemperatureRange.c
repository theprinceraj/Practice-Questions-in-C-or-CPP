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