#include <stdio.h>

float celsiusToFahrenheit(float c);

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
    printf("%3.0f %6.1f\n", celsius, celsiusToFahrenheit(celsius));
    celsius += step;
  }
}

float celsiusToFahrenheit(float c) {
    return (9.0 / 5.0) * c + 32.0;
  }