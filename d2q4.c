//Write a program to calculate the area and circumference of a circle given its radius.
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96
Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

#include <stdio.h>

int main()
{
    float r, area, circumference;

    printf("Enter radius: ");
    scanf("%f", &r);

    area = 3.14159 * r * r;
    circumference = 2 * 3.14159 * r;

    printf("Area = %.2f\n", area);
    printf("Circumference = %.2f", circumference);

    return 0;
}