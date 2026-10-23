#include <stdio.h>

int main() {
    int a[100], b[100], c[200];
    int m, n, i = 0, j = 0, k = 0;

    printf("Enter size of first array: ");
    scanf("%d", &m);

    printf("Enter first sorted array: ");
    for (int x = 0; x < m; x++) {
        scanf("%d", &a[x]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n);

    printf("Enter second sorted array: ");
    for (int x = 0; x < n; x++) {
        scanf("%d", &b[x]);
    }

    while (i < m && j < n) {
        if (a[i] <= b[j]) {
            c[k++] = a[i++];
        } else {
            c[k++] = b[j++];
        }
    }

    while (i < m) {
        c[k++] = a[i++];
    }

    while (j < n) {
        c[k++] = b[j++];
    }

    printf("Merged array: ");
    for (int x = 0; x < m + n; x++) {
        printf("%d ", c[x]);
    }

    return 0;
}