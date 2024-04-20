#include <stdio.h>

int main() {
  int count;
  int input;
  int wordCount[10];

  for (int i = 0; i < 10; i++) {
    wordCount[i] = 0;
  }

  count = 0;
  while ((input = getchar()) != '\n') {
    if (input == ' ') {
      ++wordCount[count];
      count = 0;
      continue;
    }
    ++count;
  }

  for (int i = 0; i < 10; i++) {
    int wordLength = wordCount[i];
    printf("%d ", i);
    for (int j = 0; j < wordLength; j++) {
      printf("-");
    }
    printf("\n");
  }
}