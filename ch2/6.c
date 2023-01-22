#include<stdio.h>
/*
  Exercise 2-6. Write a function setbits(x,p,n,y) that returns x with the n bits 
  that begin at position p set to the rightmost n bits of y, leaving the other bits unchanged.

  x  = 0000000011111100
  y  = 0000000011111100   ==> 100
  x' = 0000000011100100
  setbits(x, 5, 3, 255)
*/
unsigned setbits(unsigned x, int p, int n, unsigned y) {  
  return (x & ~(~(~0 << n) << (p+1-n)) | (y & ~(~0 << n)) << (p+1-n));
}

int main() {
  unsigned x = 120; 
  unsigned y = 5; 
  printf("result %d", setbits(x, 5, 3, y));  
  return 0;
}
