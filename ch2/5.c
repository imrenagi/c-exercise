/*
Exercise 2-5. Write the function any(s1,s2), which returns the first location in a string s1 where any character from the string s2 occurs, or -1 if s1 contains no characters from s2. (The standard library function strpbrk does the same job but returns a pointer to the location.)

s1 = "abcdef"
s2 = "gf"
any(s1, s2) -> 5
*/

#include<stdio.h>

int any(char s1[], char s2[]);

int main() {
  char s1[10] = "helloworld";
  char s2[10] = "b";
  printf("%d", any(s1, s2));
  return 0;
}

int any(char s1[], char s2[]) {
  int i, j;
  for (i = 0; s2[i] != '\0'; i++) {
    for (j = 0; s1[j] != '\0'; j++) {
      if (s1[j] == s2[i])
        return j;      
    }
  }
  return -1;
}

