#include <stdio.h>

int main() {
    int a[100], n, i;
    int current, max;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    current = max = a[0];

    for(i = 1; i < n; i++) {
        if(current + a[i] > a[i])
            current = current + a[i];
        else
            current = a[i];

        if(current > max)
            max = current;
    }

    printf("%d", max);

    return 0;
}