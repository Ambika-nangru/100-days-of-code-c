#include <stdio.h>

int main() {
    int a[3][3], i, j;

    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);

    // Main diagonal
    for(i = 0; i < 3; i++)
        printf("%d ", a[i][i]);

    printf("\n");

    // Secondary diagonal
    for(i = 0; i < 3; i++)
        printf("%d ", a[i][2-i]);

    return 0;
}