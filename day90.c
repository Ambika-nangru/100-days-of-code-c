
#include <stdio.h>

enum Gender {
    MALE,
    FEMALE
};

struct Person {
    char name[50];
    enum Gender gender;
};

int main() {
    struct Person p = {"Rahul", MALE};

    printf("Name: %s\n", p.name);

    if (p.gender == MALE) {
        printf("Gender: Male\n");
    } else {
        printf("Gender: Female\n");
    }

    return 0;
}
