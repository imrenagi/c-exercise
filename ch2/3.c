/*
Exercise 2-3. Write a function htoi(s), which converts a string of hexadecimal digits (including an optional 0x or 0X) 
into its equivalent integer value. The allowable digits are 0 through 9, a through f, and A through F.
*/

// 0x1 = 1
// 0x11 = 0b00010001

#include<stdio.h>

#define MAXLINE 1000 /* maximum input line length */

int getlines(char line[], int maxline);
void copy(char to[], char from[]);

unsigned int htoi(char s[]) {
  int c, i;
  unsigned int k, v;
  i = 0;
  v = 0;

  if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X')) {
    i = 2;
  }

  while((c = s[i++]) != '\0') {    
    if (c >= '0' && c <= '9') {
      k = c - '0';
      v = (v << 4) | k;
    }

    if (c >= 'a' && c <= 'f') {
      k = (c - 'a') + 10;
      v = (v << 4) | k;
    }

    if (c >= 'A' && c <= 'F') {
      k = (c - 'A') + 10;
      v = (v << 4) | k;
    }
  }
  return v;
}

int main() {
  int len; /* current line length */
  int max; /* maximum length seen so far */
  char line[MAXLINE]; /* current input line */
  char longest[MAXLINE]; /* longest line saved here */

  max = 0;
  while ((len = getlines(line, MAXLINE)) > 0) {
    printf("%s: %d\n", line, htoi(line));
  }
}

/* getline: read a line into s, return length */
int getlines(char s[], int lim) {
  int c, i;
  for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
    s[i] = c;
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