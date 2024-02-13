#include <stdio.h>

enum Day { Sat = 1,
           Sun = 2,
           Mon = 3,
           Tue = 4,
           Wed = 5,
           Thu = 6,
           Fri = 7 };
int main() {
    // emun: a user defined type of named integer identifier
    //       helps to make a program more readable

    enum Day today = Fri;

    if (today == Sat || today == Fri) {
        printf("It's the weekend! Party time!!");
    } else {
        printf("I have to work! :(");
    }
    return 0;
}
