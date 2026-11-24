#include <stdio.h>

enum Operation {
    ADD = 1, SUBTRACT, MULTIPLY
};

int main() {
    enum Operation choice;
    int a, b;

    printf("Enter choice (1-Add, 2-Subtract, 3-Multiply): ");
    scanf("%d", (int *)&choice);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    switch(choice) {
        case ADD:
            printf("Result = %d", a+b);
            break;

        case SUBTRACT:
            printf("Result = %d", a-b);
            break;

        case MULTIPLY:
            printf("Result = %d", a*b);
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}