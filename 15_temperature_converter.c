#include <ctype.h>
#include <stdio.h>

int main() {

  char unit;
  float temp;

  printf("\nIs the temp in (F) or (C)?: ");
  scanf("%c", &unit);

  unit = toupper(unit);

  if (unit == 'C') {
    // printf("\nThe temp is currently in C");
    printf("\nEnter the temp in Celsius: ");
    scanf("%f", &temp);
    temp = (temp * 9 / 5) + 32;
    printf("\nThe temp in Fahrenheit is %.2f", temp);
  } else if (unit == 'F') {
    // printf("\nThe temp is currently in F");
    printf("\nEnter the temp in (F): ");
    scanf("%f", &temp);
    temp = (temp - 32) * 5 / 9;
    printf("\nThe temp in Celsius is: %.1f", temp);
  } else {
    printf("\n %c is not a valid unit of measurement.", unit);
  }

  return 0;
}
