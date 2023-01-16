#include <stdio.h>

int main(void) {
  /*  
  warning: unknown escape sequence '\d' [-Wunknown-escape-sequence]
  printf("Hello world\d");  
  */
  printf("Hello world\d");
  return 0;
}