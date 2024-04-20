#include <stdio.h>

int main()
{
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  /* Heading */
  printf("-----------------------------------\n");
  printf("--- CELSIUS TO FAHRENHEIGHT TABLE ---\n");
  printf("-----------------------------------\n\n");

  /* Table Data */
  for (int i = upper; i >= lower; i -= 20) {
    fahr = (9.0 / 5.0) * i + 32.0;
    printf("%3.0d %6.1f\n", i, fahr);
  }
}