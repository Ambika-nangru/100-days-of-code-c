#include <stdio.h>

int main() {
    int arr[100], n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Previous greater elements are:\n");

    for (int i = 0; i < n; i++) {
        int previousGreater = -1;

        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                previousGreater = arr[j];
                break;
            }
        }

        printf("%d ", previousGreater);
    }

    return 0;
}