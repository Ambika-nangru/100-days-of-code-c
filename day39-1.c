#include <stdio.h>

int main() {
    int a[3][3];
    int i, j, flag = 1;

    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);

    for(i = 0; i < 3; i++) {
        for(j = i + 1; j < 3; j++) {
            if(a[i][i] == a[j][j]) {
                flag = 0;
                break;
            }
        }
    }

    if(flag == 1)
        printf("Diagonal elements are distinct");
    else
        printf("Diagonal elements are not distinct");

    return 0;
}