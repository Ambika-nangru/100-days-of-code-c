#include <stdio.h>

int main() {
    int arr[100], freq[1000] = {0};
    int n, repeated = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (freq[arr[i]] == 1) {
            repeated = arr[i];
        }

        freq[arr[i]]++;
    }

    printf("%d\n", repeated);

    return 0;
}