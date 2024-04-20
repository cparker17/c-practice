#include <stdio.h>

int main() {
  int c;
  int blankCount = 0;
  int tabCount = 0;
  int newLineCount = 0;

  while((c = getchar()) != '0') {
    if (c == ' ')
      ++blankCount;
    if (c == '\n')
      ++newLineCount;
    if (c == '\t')
      ++tabCount;
  }

  printf("# of blanks = %d\n", blankCount);
  printf("# of tabs = %d\n", tabCount);
  printf("# of new lines = %d\n", newLineCount);
}