#include<stdio.h>

/*
Exercise 1-13. Write a program to print a histogram of the lengths of words in its input. It is easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.
*/

#define MAX_LENGTH 20
#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */

int main() {
  int c, i, j, state, lcounter;
  int nword[MAX_LENGTH];

  lcounter = 0;

  for (i = 0; i<MAX_LENGTH; i++) {
    nword[i] = 0;
  }

  state = OUT;
  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t') {
      if (state == IN) {
        nword[lcounter]++;
        lcounter = 0;
        state = OUT;
      } 
    } else {
      state = IN;
      lcounter++;
    }
  }

  for (i = 0; i<MAX_LENGTH; i++) {
    printf("%2d  ", i);
    for (j = 0; j <nword[i]; j++) {
      printf("o");
    }
    printf("\n");
  }

  return 0;
}



/*
hello this is imre

1 
2 -
3 
4 --
5 -

*/