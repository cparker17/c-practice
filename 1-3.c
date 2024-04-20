#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main()
{
  float fahr, celsius;

  /* Heading */
  printf("-----------------------------------\n");
  printf("--- CELSIUS TO FAHRENHEIGHT TABLE ---\n");
  printf("-----------------------------------\n\n");

  /* Table Data */
  for (int i = UPPER; i > LOWER; i -= 20) {
    fahr = (9.0 / 5.0) * i + 32.0;
    printf("%3.0d %6.1f\n", i, fahr);
  }

  printf("\n\n");

  int c;

  while ((c = getchar()) != EOF)
    putchar(c);

  printf("%d\n", EOF);
}