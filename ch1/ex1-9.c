#include<stdio.h>

int main() {
  int c;

  int prev_is_blank = 0;
  while((c = getchar()) != EOF) {
    if (c == ' ') {
      prev_is_blank = 1;      
    } else {
      if (prev_is_blank) {
        putchar(' ');
      }
      putchar(c);
      prev_is_blank = 0;
    }
  }
  return 0;
}
