#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */

int getlines(char s[], int lim);
int strindex(char s[], char t[]);

char pattern[] = "wo"; /* pattern to search for */

main() {
  char line[MAXLINE];
  int found = 0;

  while (getlines(line, MAXLINE) > 0) {
    
    printf("%s: %d\n", line, strindex(line, pattern));
    printf("----\n");
    // if (strindex(line, pattern) >= 0) {
    //   printf("%s", line);
    //   found++;
    // }
  }
    
}

int getlines(char s[], int lim) {
  int c, i;
  i = 0;
  while (--lim > 0 && (c=getchar()) != EOF && c != '\n')
    s[i++] = c;
  if (c == '\n') 
    s[i++] = c;
  s[i] = '\0';
  return i;
}

// Exercise 4-1. Write the function strindex(s,t) which returns the position of the rightmost occurrence of t in s, or -1 if there is none.
int strindex(char s[], char t[]) {
  int i, j, k, pos;
  pos = -1;
  for (i = 0; s[i] != '\0'; i++) {
    for (j=i, k=0; t[k]!='\0' && s[j]==t[k]; j++, k++)
      ;
    if (k > 0 && t[k] == '\0') {
      pos = i;
    }
  }
  return pos;  
}