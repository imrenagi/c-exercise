#include<stdio.h>

int main() {
  float fahr, celcius;
  float lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;
  printf("%3s %6s\n", "F", "C");
  for (fahr = 300; fahr > 0; fahr-=step) {
    printf("%3.0f %6.1f\n", fahr, (5.0/9.0) * (fahr - 32.0));
  }
  return 0;
}