#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

struct Student getTopStudent() {
    struct Student s = {1, "Rahul", 95.5};
    return s;
}

int main() {
    struct Student top;

    top = getTopStudent();

    printf("Top Student Details:\n");
    printf("Roll No: %d\n", top.rollNo);
    printf("Name: %s\n", top.name);
    printf("Marks: %.2f\n", top.marks);

    return 0;
}