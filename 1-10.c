#include <stdio.h>

int main() {
  char input;

  while ((input = getchar()) != 0) {
    if (input == '\t')
      printf("\\t");
    else if (input == '\b')
      printf("\\b'");
    else if (input == '\\')
      printf("\\\\");
    else 
      printf("%c", input);
  }
}