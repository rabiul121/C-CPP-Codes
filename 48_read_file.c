//
// Created by robi on 2/18/2024.
//
#include <stdio.h>
int main() {
    FILE *pF = fopen("C:\\Users\\robi\\Desktop\\poem.txt", "r");
    char buffer[255];

    if (pF == NULL) {
        printf("Could not find the file.");
    } else {
        while (fgets(buffer, 255, pF) != NULL) {
            printf("%s", buffer);
        }
    }

    fclose(pF);
    return 0;
}