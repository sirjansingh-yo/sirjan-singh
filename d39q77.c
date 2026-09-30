#include <stdio.h>

int main() {
    int n, a[10][10], i, j, k;
    int distinct = 1;

    scanf("%d %d", &n, &n);

    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for(i = 0; i < n; i++) {
        for(k = i + 1; k < n; k++) {
            if(a[i][i] == a[k][k]) {
                distinct = 0;
                break;
            }
        }
    }

    if(distinct)
        printf("True");
    else
        printf("False");

    return 0;
}