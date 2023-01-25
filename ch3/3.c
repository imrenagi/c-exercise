#include<stdio.h>

#define ON 1
#define OFF 0

// Exercise 3-3. Write a function expand(s1,s2) that expands shorthand notations like a-z in the string s1 into the equivalent complete list abc...xyz in s2. Allow for letters of either case and digits, and be prepared to handle cases like a-b-c and a-z0-9 and -a-z. Arrange that a leading or trailing - is taken literally.
void expand(char src[], char dst[]) {
  int i, j, state;
  int start, end;
  state = OFF;
  for(i = 0, j = 0; src[i] != '\0'; i++) {    
    if ((src[i] >= '0' && src[i] <= '9') || (src[i] >= 'a' && src[i] <= 'z')) {
      if (state == OFF) {
        start = src[i];
        dst[j++] = src[i];        
        state = ON;
      } else {
        end = src[i];
        while(start < end) {
          dst[j++] = ++start;
        }
        state = OFF;
      }
    } else if (src[i] == '-') {
      if (state == OFF) {
        dst[j++] = src[i];
      } 
    }
  }
  dst[j] = '\0';
}

int main() {
  char in[100] = "-0-33-7a-e-";
  char out[100];
  expand(in, out);
  printf("%s\n", out);
  return 0;
}
