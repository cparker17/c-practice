#include <stdio.h>

int main() {
  char prev, input;

  prev = 'T';
  while ((input = getchar()) != 0) {
    if (input == ' ' && prev == ' ')
      ;
    else
      printf("%c", input);
    prev = input;
  }
}