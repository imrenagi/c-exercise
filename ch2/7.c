#include<stdio.h>

// Write a function invert(x,p,n) that returns x with the n bits that begin at position p inverted (i.e., 1 changed into 0 and vice versa), leaving the others unchanged.
unsigned invert(unsigned x, int p, int n) {
  return x & ~(~(~0 << n) << (p+1-n)) | ~x & (~(~0 << n) << (p+1-n));
}

int main() {
  unsigned x;
  int p, n;
  x = 0b00110011;
  p = 4;
  n = 3;
  printf("res %d expected %d\n", invert(x, p, n), 0b00101111);
  return 0;
}