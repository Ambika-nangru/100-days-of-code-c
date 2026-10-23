#include <stdio.h>

int main() {
    int arr[100], n, k;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    if (k <= 0 || k > n) {
        printf("Invalid k");
        return 0;
    }

    for (int i = 0; i <= n - k; i++) {
        int negative = 0;

        for (int j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                negative = arr[j];
                break;
            }
        }

        printf("%d ", negative);
    }

    return 0;
}