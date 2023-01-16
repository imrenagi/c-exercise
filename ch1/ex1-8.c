#include<stdio.h>

int main() {
  int c;
  int blank, tabs, newlines;

  blank = 0;
  tabs = 0;
  newlines = 0;

  while((c = getchar()) != EOF) {
    if (c == '\n')
      newlines++;
    else if (c == '\t')
      tabs++;
    else if (c == ' ')
      blank++;
  }

  printf("newlines %d, tabs %d, blank %d", newlines, tabs, blank);
  return 0;
}