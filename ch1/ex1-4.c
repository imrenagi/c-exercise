#include<stdio.h>

int main() {
  float celcius, fahr;
  float lower, upper, step;

  celcius = 0;  
  lower = 0.0;
  upper = 50.0;
  step = 5.0;

  printf("%3s %5s\n", "C", "F");
  while (celcius <= upper) {    
    fahr = (celcius * 9.0/5.0) + 32.0;
    printf("%3.0f %3.2f\n", celcius, fahr);
    celcius += step;
  }
}