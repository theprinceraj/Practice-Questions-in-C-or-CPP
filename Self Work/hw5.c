#include <conio.h>
#include <stdio.h>

int main() {
  FILE *fp;
  char ch;
  fp = fopen("hello.txt", "w");
  printf("Enter data: ");
  while ((ch = getchar()) != EOF) {
    putc(ch, fp);
  }
  fclose(fp);
  printf("Saved data to the file and closed it.\n");
  printf("Printing data from file now after reopening it:\n");
  fp = fopen("hello.txt", "r");
  while ((ch = getc(fp)) != EOF) {
    printf("%c", ch);
  }
  fclose(fp);
  printf("All the data from the file has been read and printed. File has been "
         "closed.");
}