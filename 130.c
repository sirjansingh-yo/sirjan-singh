#include <stdio.h>

int main() {
    FILE *fp;
    char name[5][50];
    int roll[5], i;
    float marks[5];

    fp = fopen("students.txt", "w");

    if(fp == NULL) {
        printf("File error");
        return 1;
    }

    for(i = 0; i < 5; i++) {
        printf("Enter name, roll and marks: ");
        scanf("%49s %d %f", name[i], &roll[i], &marks[i]);

        fprintf(fp, "%s %d %.2f\n",
                name[i], roll[i], marks[i]);
    }

    fclose(fp);

    fp = fopen("students.txt", "r");

    if(fp == NULL) {
        printf("File error");
        return 1;
    }

    printf("\nStudent Records:\n");

    for(i = 0; i < 5; i++) {
        fscanf(fp, "%49s %d %f",
               name[i], &roll[i], &marks[i]);

        printf("%s %d %.2f\n",
               name[i], roll[i], marks[i]);
    }

    fclose(fp);

    return 0;
}