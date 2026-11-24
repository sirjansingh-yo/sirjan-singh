
#include <stdio.h>

// Define structure
struct Student {
    int rollNo;
    char name[50];
    float marks;
};

// Function that accepts a structure as parameter
void display(struct Student s) {
    printf("\nStudent Details:\n");
    printf("Roll Number: %d\n", s.rollNo);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    struct Student s1;

    printf("Enter roll number: ");
    scanf("%d", &s1.rollNo);

    printf("Enter name: ");
    scanf("%49s", s1.name);

    printf("Enter marks: ");
    scanf("%f", &s1.marks);

    // Pass structure to function
    display(s1);

    return 0;
}
