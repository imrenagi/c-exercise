#include <stdio.h>

#define MAXLINE 1000 /* maximum input line length */
#define LENGTH_THRESHOLD 13

int get_new_line(char line[], int maxline);
void copy(char to[], char from[]);
int remove_trailing(char src[]);

int main() {
  int len; /* current line length */
  int max; /* maximum length seen so far */
  char line[MAXLINE]; /* current input line */
  char temp[MAXLINE];

  max = 0;
  while ((len = get_new_line(line, MAXLINE)) > 0) {
    if (remove_trailing(line) > 0) {
      printf("%s", line);
    }
  }
  return 0;
}

/* getline: read a line into s, return length */
int get_new_line(char s[], int lim) {
  int c, i;
  for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
    s[i] = c;

  if (c == '\n') {
    s[i] = c;
    ++i;
  } 
  s[i] = '\0';
  return i;
}

int remove_trailing(char s[]) {
  int i;
  for (i = 0; s[i] != '\n'; i++)
    ;  
  i--;
  for (i > 0; ((s[i] == '\t') || (s[i] == ' ')); i--);
  if (i > 0) {
    s[++i] = '\n';
    s[++i] = '\0';
  }
  return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[]) {
  int i;
  i = 0;
  while ((to[i] = from[i]) != '\0')
    ++i;
}
