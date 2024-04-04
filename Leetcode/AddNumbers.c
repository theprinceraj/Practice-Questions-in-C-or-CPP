#include <stdio.h>
int addNumbers(int num) {
  int sum = 0, rem = 0;
  while (num > 9) {
    sum = 0;
    while (num > 0) {
      rem = num % 10;
      sum += rem;
      num /= 10;
    }
    num = sum;
  }
  return sum;
}

int main() {
  printf("%d", addNumbers(38));
  return 0;
}