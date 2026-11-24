#include <stdio.h>

enum Days {
    SUNDAY, MONDAY, TUESDAY, WEDNESDAY,
    THURSDAY, FRIDAY, SATURDAY
};

int main() {
    enum Days day;

    for(day = SUNDAY; day <= SATURDAY; day++) {
        printf("%d\n", day);
    }

    return 0;
}