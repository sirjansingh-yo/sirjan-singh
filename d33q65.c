#include <stdio.h>

int main() {
    int n, a[100], x;
    int low, high, mid, found = -1, i;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &x);

    low = 0;
    high = n - 1;

    while(low <= high) {
        mid = (low + high) / 2;

        if(a[mid] == x) {
            found = mid;
            break;
        }
        else if(a[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }

    if(found != -1)
        printf("Found at index %d", found);
    else
        printf("-1");

    return 0;
}