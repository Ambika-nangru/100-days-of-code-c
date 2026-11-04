#include <stdio.h>

enum Month {
    JANUARY = 1,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};

int main() {
    enum Month month;

    for (month = JANUARY; month <= DECEMBER; month++) {
        printf("Month %d: ", month);

        switch (month) {
            case APRIL:
            case JUNE:
            case SEPTEMBER:
            case NOVEMBER:
                printf("30 days\n");
                break;

            case FEBRUARY:
                printf("28 days\n");
                break;

            default:
                printf("31 days\n");
        }
    }

    return 0;
}