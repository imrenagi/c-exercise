#include <stdio.h>

#define MAXLINE 1000 /* maximum input line length */

int getlines(char line[], int maxline);
void copy(char to[], char from[]);

int main() {
  int len; /* current line length */
  int max; /* maximum length seen so far */
  char line[MAXLINE]; /* current input line */
  char longest[MAXLINE]; /* longest line saved here */

  max = 0;
  while ((len = getlines(line, MAXLINE)) > 0) {
    printf("%s", line);
  }
  return 0;
}

/* getline: read a line into s, return length */
int getlines(char s[], int lim) {
  int c, i;
  for (i = 0; i < lim - 1; ++i) {
    c = getchar();
    if (c == EOF) {
      break;
    }
    if (c == '\n') {
      break;
    }
    s[i] = c;
  }

  if (c == '\n') {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[]) {
  int i;
  i = 0;
  while ((to[i] = from[i]) != '\0')
    ++i;
}
