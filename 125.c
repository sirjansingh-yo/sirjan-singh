#include <stdio.h>

int main() {
    FILE *fp;
    char str[200];

    fp = fopen("info.txt", "a");

    if(fp == NULL) {
        printf("File cannot be opened");
        return 1;
    }

    printf("Enter text: ");
    getchar();
    fgets(str, sizeof(str), stdin);

    fprintf(fp, "%s", str);

    printf("Text appended successfully");

    fclose(fp);

    return 0;
}