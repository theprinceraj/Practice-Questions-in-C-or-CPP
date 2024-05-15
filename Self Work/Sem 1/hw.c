#include <stdio.h>
struct student {
  char name[30];
  int rollNo;
  struct date_of_birth {
    int dd, mm, yy;
  } dob;
};

int main() {
  struct student std;
  printf("Enter name: ");
  gets(std.name);
  printf("Enter roll number: ");
  scanf("%d", &std.rollNo);
  printf("Enter your DOB[dd,mm,yyy]: ");
  scanf("%d %d %d", &std.dob.dd, &std.dob.mm, &std.dob.yy);

  printf("Name: %s\nRoll No.: %d\nDOB: %d-%d-%d", std.name, std.rollNo,
         std.dob.dd, std.dob.mm, std.dob.yy);
  return 0;
}