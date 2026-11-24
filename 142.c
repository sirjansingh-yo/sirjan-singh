#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s[5];
    int i;

    for(i = 0; i < 5; i++) {
        printf("Enter student %d details:\n", i+1);

        scanf("%49s", s[i].name);
        scanf("%d", &s[i].roll_no);
        scanf("%f", &s[i].marks);
    }

    printf("\nStudent Records:\n");

    for(i = 0; i < 5; i++) {
        printf("\nName: %s", s[i].name);
        printf("\nRoll Number: %d", s[i].roll_no);
        printf("\nMarks: %.2f\n", s[i].marks);
    }

    return 0;
}