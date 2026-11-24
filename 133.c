#include <stdio.h>

enum Months {
    JANUARY = 1, FEBRUARY, MARCH, APRIL,
    MAY, JUNE, JULY, AUGUST,
    SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER
};

int main() {
    enum Months month;
    int days[] = {
        31, 28, 31, 30, 31, 30,
        31, 31, 30, 31, 30, 31
    };

    for(month = JANUARY; month <= DECEMBER; month++) {
        printf("Month %d = %d days\n",
               month, days[month-1]);
    }

    return 0;
}