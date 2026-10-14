#include <stdio.h>

int main() {
    int a[3][3], sum[3];
    int i, j;

    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);

    for(i = 0; i < 3; i++) {
        sum[i] = 0;

        for(j = 0; j < 3; j++)
            sum[i] = sum[i] + a[i][j];
    }

    for(i = 0; i < 3; i++)
        printf("Sum of row %d = %d\n", i + 1, sum[i]);

    return 0;
}