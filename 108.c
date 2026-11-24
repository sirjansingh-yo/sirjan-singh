#include <stdio.h>

int main() {
    int a[100], result[100], n, i, j;
    int product;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < n; i++) {
        product = 1;

        for(j = 0; j < n; j++) {
            if(i != j)
                product *= a[j];
        }

        result[i] = product;
    }

    for(i = 0; i < n; i++)
        printf("%d ", result[i]);

    return 0;
}