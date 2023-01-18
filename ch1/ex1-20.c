/*
Exercise 1-20. Write a program detab that replaces tabs in the input with the proper number of blanks to space to the next tab stop. 
Assume a fixed set of tab stops, say every n columns. Should n be a variable or a symbolic parameter?
*/

#include <stdio.h>

#define TAB_STOP 5

int main() {
  int c,i;
  int pos;
  int diff;
  pos = 0;
  while((c = getchar()) != EOF) {
    if (c == '\t') { //if tab, calculate how many spaces to add
      diff = (TAB_STOP - (pos % TAB_STOP));
      for (i=0; i < diff; i++) {
        putchar('#');        
      }
      pos += diff;
    } else if (c == '\n') { // reset pos
      pos = 0;
      putchar(c);
    } else { //if normal char
      pos++;
      putchar(c);
    }
  }
  return 0;
}