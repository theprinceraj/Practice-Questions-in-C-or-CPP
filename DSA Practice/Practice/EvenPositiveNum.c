#include <stdio.h>
int main() {

  int num;
  printf("Enter a number: ");
  scanf("%d", &num);

  if (num % 2 == 0 && num > 0) {
    printf("Yes, the entered number is positive as well as even.");
  } else {
    printf("No, entered number is either not positive or not even.");
  }

  return 0;
}