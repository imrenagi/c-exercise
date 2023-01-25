#include<stdio.h>

#define MAXLINE 1000 /* maximum input line length */

void escape(char s[], char t[]);

int main() {
  int len; 
  char line[MAXLINE] = "oke\tmantap\n"; 
  char escaped[MAXLINE];
  escape(line, escaped);
  printf("%s", escaped);
}

/*
Exercise 3-2. Write a function escape(s,t) that converts characters like newline and tab into visible escape sequences like \n and \t as it copies the string t to s. Use a switch. Write a function for the other direction as well, converting escape sequences into the real characters.
*/
void escape(char s[], char t[]) {
  int i, j;
  i = 0;
  j = 0;

  while(s[i] != '\0') {
    switch (s[i]) {
      case '\n':
        t[j] = '\\';
        j++;
        t[j] = 'n';
        break;
      case '\t':
        t[j] = '\\';
        j++;
        t[j] = 't';
        break;
      default:        
        t[j] = s[i];
        break;
    }
    i++;
    j++;
  }
  s[j] = '\0';
}