#include <stdio.h>

int main() {
    char s[100];
    int i, j, len = 0, max = 0;
    int seen[256];

    scanf("%99s", s);

    for(i = 0; s[i] != '\0'; i++) {
        for(j = 0; j < 256; j++)
            seen[j] = 0;

        len = 0;

        for(j = i; s[j] != '\0'; j++) {
            unsigned char ch = s[j];

            if(seen[ch] == 1)
                break;

            seen[ch] = 1;
            len++;
        }

        if(len > max)
            max = len;
    }

    printf("%d", max);

    return 0;
}