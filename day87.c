
#include <stdio.h>

enum Role {
    ADMIN = 1,
    USER,
    GUEST
};

int main() {
    int choice;

    printf("1. ADMIN\n");
    printf("2. USER\n");
    printf("3. GUEST\n");

    printf("Enter your role: ");
    scanf("%d", &choice);

    switch (choice) {
        case ADMIN:
            printf("Welcome Admin! You have full access.");
            break;

        case USER:
            printf("Welcome User! You have standard access.");
            break;

        case GUEST:
            printf("Welcome Guest! You have limited access.");
            break;

        default:
            printf("Invalid role selected!");
    }

    return 0;
}
