//Write a program to convert temperature from Celsius to Fahrenheit.
Input 1:
0
Output 1:
Fahrenheit=32
Input 2:
100
Output 2:
Fahrenheit=212

#include <stdio.h>

int main()
{
    float c, f;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);

    f = (9 * c) / 5 + 32;

    printf("Fahrenheit = %.2f", f);

    return 0;
}