#include <stdio.h>

void greetings(char name[], int age) {
  printf("\nHappy birthday, %s!", name);
  printf("\nYou are %d years old.", age);
}

int main() {
  char name[] = "Robi";
  int age = 27;

  greetings(name, age);
  return 0;
}
