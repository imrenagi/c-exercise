#include<stdio.h>
#include<stdint.h>

/*
Exercise 2-8. Write a function rightrot(x,n) that returns the value of the integer x rotated to the right by n positions.
*/
unsigned short rightrot(unsigned short x, int n) {
  return x >> n | x << (__SIZEOF_SHORT__ * 8 - n);
}

int main() {
  unsigned short x, y;  
  x = 0b0000000000110011; 
  y = rightrot(x, 1); // 0b1000000000011001
  printf("%d %d", y, 0b1000000000011001);
  return 0;
}
