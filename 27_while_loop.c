#include <stdio.h>
#include <string.h>

int main()
{
  char name[20];
  printf("\nWhat's your name? ");
  fgets(name, 20, stdin);
  name[strlen(name) - 1] = '\0';

  while (strlen(name) == 0)
  {
    printf("\nYou did not enter your name! ");
    printf("\nWhat's your name? ");
    fgets(name, 20, stdin);
    name[strlen(name) - 1] = '\0';
  }
  printf("Hello, %s!\n", name);
  return 0;
}
