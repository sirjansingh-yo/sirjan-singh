#include <stdio.h>

int main()
{
    int n, first, last, digits = 1;
    int middle, power, result;

    printf("Enter number: ");
    scanf("%d", &n);

    if(n < 10)
    {
        printf("Number after swapping = %d", n);
        return 0;
    }

    last = n % 10;

    while(n / digits >= 10)
        digits = digits * 10;

    first = n / digits;

    middle = (n % digits) / 10;

    power = digits / 10;

    result = last * digits + middle * 10 + first;

    printf("Number after swapping = %d", result);

    return 0;
}