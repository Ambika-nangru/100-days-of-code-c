#include <stdio.h>

int main() {
    char str[100];
    int i, vowels = 0, consonants = 0;

    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++) {

        if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;

        if(str[i] >= 'a' && str[i] <= 'z') {

            if(str[i] == 'a' || str[i] == 'e' ||
               str[i] == 'i' || str[i] == 'o' ||
               str[i] == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d", consonants);

    return 0;
}