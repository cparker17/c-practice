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
  celsius = lower;
  while (celsius <= upper) {
    fahr = (9.0 / 5.0) * celsius + 32.0;
    printf("%3.0f %6.1f\n", celsius, fahr);
    celsius += step;
  }
}