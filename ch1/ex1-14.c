#include<stdio.h>

/*
Exercise 1-14. Write a program to print a histogram of the frequencies of different characters in its input.
*/

#define NCHAR 26
#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */

int main() {
  int c, i, j;
  int nchar[NCHAR];

  for (i = 0; i<NCHAR; i++) {
    nchar[i] = 0;
  }

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t') {
      
    } else {
      if (c >= 'a' && c <= 'z') {
        nchar[c-'a']++;
      }

      if (c >= 'A' && c <= 'Z') {
        nchar[c-'A']++;
      }
      
    }
  }

  for (i = 0; i<NCHAR; i++) {
    printf("%2d  ", i);
    for (j = 0; j <nchar[i]; j++) {
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