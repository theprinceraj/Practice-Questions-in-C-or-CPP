#include <stdio.h>

int main() {

  int n;
//   printf("Enter value of 'n': ");
//   scanf("%d", &n);

  for (int row = 1; row <= 5; row++) {
    for (int col = 5; col >= 1; col--) {
      printf("=");
    }
    
    printf("\n");
  }

  return 0;
}