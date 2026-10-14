#include <stdio.h>
#include <math.h>

int main() {
    int n, original, temp, rem, digits = 0, sum = 0;

    scanf("%d", &n);

    original = n;
    temp = n;

    while (temp > 0) {
        digits++;
        temp = temp / 10;
    }

    temp = n;

    while (temp > 0) {
        rem = temp % 10;
        sum = sum + pow(rem, digits);
        temp = temp / 10;
    }

    if (sum == original)
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");

    return 0;
}