#include<stdio.h>
#include <limits.h>

int abs(int c) {
  return (c < 0) ? c * -1 : c;
}

void reverse(char s[]) {
  int i, j, temp;
  i = 0;
  j = 0;
  for (; s[i] != '\0'; ++i)
    ;
  i--;

  while (i > j) {
    temp = s[i];
    s[i] = s[j];
    s[j] = temp;
    i--;
    j++;
  }
}

/* itoa: convert n to characters in s */
// Exercise 3-4. In a two's complement number representation, our version of itoa does not handle the largest negative number, that is, the value of n equal to -(2wordsize-1). Explain why not. Modify it to print that value correctly, regardless of the machine on which it runs.
void itoa(int n, char s[]) {
  int i, sign, number;
  sign = n;
  i = 0;
  do { 
    s[i++] = abs(n % 10) + '0';     
    n /= 10;
    number =  n;
  } while (number != 0);
  if (sign < 0)
    s[i++] = '-';
  s[i] = '\0';
  reverse(s);
}

// Exercise 3-5. Write the function itob(n,s,b) that converts the integer n into a base b character representation in the string s. In particular, itob(n,s,16) formats s as a hexadecimal integer in s.
void itob(int n, char s[], char b) {
  int i, sign, number, temp;
  sign = n;
  i = 0;  
  do { 
    s[i++] = abs(n % b) <= 9 ? abs(n % b) + '0' : (abs(n % b) - 10) + 'A';
    n /= b;
    number =  n;
  } while (number != 0);
  
  if (sign < 0)
    s[i++] = '-';
  s[i] = '\0';
  reverse(s);
}

// Exercise 3-6. Write a version of itoa that accepts three arguments instead of two. The third argument is a minimum field width; the converted number must be padded with blanks on the left if necessary to make it wide enough.
void itoap(int n, char s[], int w) {
  int i, sign, number;
  sign = n;
  i = 0;
  do { 
    s[i++] = abs(n % 10) + '0';     
    n /= 10;
    number =  n;
    w--;
  } while (number != 0);

  while (w > 0) {
    s[i++] = '0';
    w--;
  }

  if (sign < 0)
    s[i++] = '-';

  s[i] = '\0';
  reverse(s);
}

int main() {
  char s1[30], s2[30];
  int x;
  char b;
  // itoa(INT_MAX, s1);
  // printf("%d | %s\n", INT_MAX, s1);

  // x = -100;
  // b = 16;
  // itob(x, s2, b);
  // printf("%d in base %d is %s\n", x, b, s2);

  itoap(-2012, s1, 5);
  printf("%s\n", s1);
  return 0;
}