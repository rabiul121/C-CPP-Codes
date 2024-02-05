#include <stdio.h>

// Function prototype are used to tell the compiler about the function before it
// is used.

void hello(char[], int); // Function prototype

int main() {
  char name[] = "Robi";
  int age = 21;
  hello(name, age); // If we don't provide all the arguments, it will give an
                    // error. Example: hello(name);
  return 0;
}

void hello(char name[], int age) {
  printf("\nHello, %s", name);
  printf("\nYou are %d years old", age);
}
