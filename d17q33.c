#include <stdio.h>

int main()
{
    int n, original, temp, digit, digits = 0;
    int sum = 0, power, i;

    printf("Enter number: ");
    scanf("%d", &n);

    original = n;
    temp = n;

    while(temp != 0)
    {
        digits++;
        temp = temp / 10;
    }

    temp = n;

    while(temp != 0)
    {
        digit = temp % 10;

        power = 1;
        for(i = 1; i <= digits; i++)
            power = power * digit;

        sum = sum + power;
        temp = temp / 10;
    }

    if(sum == original)
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");

    return 0;
}