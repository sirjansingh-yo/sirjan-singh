#include <stdio.h>

int main() {
    FILE *fp;
    char name[50];
    int age;

    fp = fopen("info.txt", "w");

    if(fp == NULL) {
        printf("File cannot be created");
        return 1;
    }

    printf("Enter name and age: ");
    scanf("%49s %d", name, &age);

    fprintf(fp, "Name: %s\nAge: %d", name, age);

    fclose(fp);

    printf("Data saved successfully");

    return 0;
}