#include <stdio.h>

struct Student {
    char name[50];
    int marks;
};

int main() {
    struct Student s[100];
    int n, i, max = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter name and marks of student %d: ", i + 1);
        scanf("%s %d", s[i].name, &s[i].marks);
    }

    for (i = 1; i < n; i++) {
        if (s[i].marks > s[max].marks) {
            max = i;
        }
    }

    printf("\nStudent with highest marks:\n");
    printf("Name: %s\n", s[max].name);
    printf("Marks: %d\n", s[max].marks);

    return 0;
}