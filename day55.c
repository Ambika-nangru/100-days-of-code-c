#include <stdio.h>

int main() {
    int nums[100], n;
    int majority = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    for (int i = 0; i < n; i++) {
        int count = 0;

        for (int j = 0; j < n; j++) {
            if (nums[i] == nums[j]) {
                count++;
            }
        }

        if (count > n / 2) {
            majority = nums[i];
            break;
        }
    }

    printf("%d\n", majority);

    return 0;
