#include <conio.h>
#include <stdio.h>

int main() {
  FILE *fp;
  char ch;
  fp = fopen("Hello.txt", "w");
  printf("Enter data: ");
  while ((ch = getchar()) != EOF) {
    putc(ch, fp);
  }
  fclose(fp);
  fp = fopen("hello.txt", "r");
  while ((ch = getc(fp)) != EOF) {
    printf("%c", ch);
  }
  fclose(fp);
}