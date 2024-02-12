//
// Created by robi on 2/12/2024.
//
#include <stdio.h>

struct Student {
    char name[12];
    float gpa;
};

int main() {

    struct Student student1 = {"Robi", 2.96};
    struct Student student2 = {"Emon", 3.55};
    struct Student student3 = {"Rajib", 3.00};

    struct Student students[] = {student1, student2, student3};

    for (int i = 0; i < sizeof(students) / sizeof(students[0]); ++i) {
        printf("%-12s\t", students[i].name);
        printf("%.2lf\n", students[i].gpa);
    }
    return 0;
}