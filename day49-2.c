#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, last = 0;

    fgets(str, 100, stdin);

    str[strcspn(str, "\n")] = '\0';

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ')
            last = i + 1;
    }

    printf("%c ", str[0]);

    for(i = 1; i < last; i++) {
        if(str[i-1] == ' ')
            printf("%c ", str[i]);
    }

    printf("%s", &str[last]);

    return 0;
}