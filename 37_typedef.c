//
// Created by robi on 2/12/2024.
//

#include <stdio.h>
#include <string.h>

//typedef char user[25];

typedef struct {
    char name[25];
    char password[12];
    int id;
} User;

int main() {
    //    typedef: reserved keyword that gives an existing datatype a nickname

    //    user user1 = "Robiul";
    //    user user2 = "Rakib";
    //    user user3 = "Jahid";
    //
    //    printf("User 1: %s\n", user1);
    //    printf("User 2: %s\n", user2);
    //    printf("User 3: %s\n", user3);


    User user1 = {"Robiul", "124565656", 1702040};
    User user2 = {"Rakib", "4444243476", 1702025};
    User user3 = {"Jahid", "554456224", 1702056};

    printf("%s\n", user1.name);
    printf("%s\n", user1.password);
    printf("%d\n", user1.id);
    printf("\n");
    printf("%s\n", user2.name);
    printf("%s\n", user2.password);
    printf("%d\n", user2.id);
    printf("\n");
    printf("%s\n", user3.name);
    printf("%s\n", user3.password);
    printf("%d\n", user3.id);
    printf("\n");


    return 0;
}