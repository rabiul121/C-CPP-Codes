//
// Created by robi on 2/18/2024.
//
#include <stdio.h>
int main() {

    FILE *pF = fopen("C:\\users\\robi\\Desktop\\test.txt", "a");
    fprintf(pF, "\nI like C programming!");

    fclose(pF);

    /*if (remove("test.txt") == 0) {
        printf("That file was deleted successfully!");
    } else {
        printf("That file was NOT deleted!");
    }
*/
    return 0;
}