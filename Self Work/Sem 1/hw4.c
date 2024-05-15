#include <stdio.h>
struct firstStruct {
  int num1, num2;
};
struct firstStruct inputStruct;
struct firstStruct TakeUserInput();
void DisplayOutput(struct firstStruct Input);
struct firstStruct TakeUserInput() {
  printf("Enter first and second numbers: ");
  scanf("%d %d", &inputStruct.num1, &inputStruct.num2);
  return inputStruct;
}
int main() {
  DisplayOutput(TakeUserInput());
  return 0;
}

void DisplayOutput(struct firstStruct Input) {
  printf("The sum is %d\n", ((Input.num1) + (Input.num2)));
}