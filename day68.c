#include <stdio.h>

int main() {
    int arr[100], n;
    int actualSum = 0, expectedSum;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        actualSum += arr[i];
    }

    expectedSum = n * (n + 1) / 2;

    printf("%d\n", expectedSum - actualSum);

    return 0;
}