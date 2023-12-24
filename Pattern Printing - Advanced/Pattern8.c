#include <stdio.h>
int main() {

  int n;
  printf("Enter value of n: ");
  scanf("%d", &n);

  for (int row = 1; row <= n; row++) {
    for (int sp = row; sp < n; sp++) {
      printf(" ");
    }
    for (int st = 1; st <= row; st++) {
      printf("* ");
    }
    printf("\n");
  }
  for (int row = n; row >= 1; row--) {
    for (int sp = row; sp < n; sp++) {
      printf(" ");
    }
    for (int st = 1; st <= row; st++) {
      printf("* ");
    }
    printf("\n");
  }

  return 0;
}

// OUTPUT-
//    * 
//   * * 
//  * * * 
// * * * *
// * * * * 
//  * * *
//   * *
//    *