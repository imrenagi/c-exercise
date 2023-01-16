#include<stdio.h>

float fahr_to_cel(float fahr) {
  return (5.0/9.0) * (fahr - 32.0);
}

int main() {
  float fahr, celcius;
  float lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;
  printf("%3s %6s\n", "F", "C");
  while (fahr <= upper) {
    printf("%3.0f %6.1f\n", fahr, fahr_to_cel(fahr));
    fahr = fahr + step;
  }
  return 0;
}
