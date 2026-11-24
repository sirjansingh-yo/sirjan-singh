#include <stdio.h>

int main() {
    FILE *fp;
    int num, count = 0, sum = 0;
    float average;

    fp = fopen("numbers.txt", "r");

    if(fp == NULL) {
        printf("File not found");
        return 1;
    }

    while(fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    if(count > 0) {
        average = (float)sum / count;

        printf("Sum = %d\n", sum);
        printf("Average = %.2f", average);
    }
    else {
        printf("No numbers found");
    }

    fclose(fp);

    return 0;
}