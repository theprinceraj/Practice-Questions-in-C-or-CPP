#include <stdio.h>
struct distance {
  int feet;
  float inch;
};
int main() {
  struct distance dis1, dis2, sum;
  printf("Enter first distance in feet and in inch: ");
  scanf("%d %f", &dis1.feet, &dis1.inch);
  printf("Enter second distance in feet and in inch: ");
  scanf("%d %f", &dis2.feet, &dis2.inch);
  sum.feet = dis1.feet + dis2.feet;
  sum.inch = dis1.inch + dis2.inch;
  for (; sum.inch >= 12; sum.inch -= 12) {
    sum.feet++;
  }
  printf("\nThe sum is %d feet %.2f inches", sum.feet, sum.inch);
  return 0;
}