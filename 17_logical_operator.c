#include <stdbool.h>
#include <stdio.h>

int main() {
  // logical operator AND (&&), OR (||), NOT (!)
  float temp = 20;
  bool sunny = true;

  if (temp >= 0 && temp <= 30 && sunny == true) {
    printf("\nThe weather is fine.");
  } else {
    printf("\nThe weather is bad!");
  }

  return 0;
}
