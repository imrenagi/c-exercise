#include<stdio.h>

/*
Exercise 2-9. In a two's complement number system, x &= (x-1) deletes the rightmost 1-bit in x. Explain why. Use this observation to write a faster version of bitcount.
*/
int bitcount(char x) {
  int count = 0;
  for(; x != 0; x&=(x-1)) 
    count++;
  return count;
}

int main() {
  char x;
  int y;
  char i,j;
  x = -8;
  y = bitcount(x);
  printf("total 1-bit in %d is %d\n", x, y);
  return 0;
}

/*
iterasinya while (x &= (x-1)) != 0 {b++}

8-bit
8 = 00001000
7 = 00000111
------ &
    00000000

7 = 00000111
6 = 00000110
------ & 
    00000110

6 = 00000110
5 = 00000101
-----& 
    00000100

-8 = 11111000
-9 = 11110111
------ &
     11110000

-8 = 1111 0111  + 1 = 11111000 

*/