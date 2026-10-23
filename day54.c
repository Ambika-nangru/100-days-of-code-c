#include <stdio.h>

int main() {
    int n, x;
    int leftSum, rightSum;
    int pivot = -1;

    printf("Enter n: ");
    scanf("%d", &n);

    for (x = 1; x <= n; x++) {
        leftSum = 0;
        rightSum = 0;

        for (int i = 1; i <= x; i++) {
            leftSum += i;
        }

        for (int i = x; i <= n; i++) {
            rightSum += i;
        }

        if (leftSum == rightSum) {
            pivot = x;
            break;
        }
    }

    printf("%d\n", pivot);

    return 0;
}