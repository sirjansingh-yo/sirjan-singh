#include <stdio.h>

int main() {
    char str[200], word[100], longest[100];
    int i = 0, j, len = 0, max = 0;

    fgets(str, sizeof(str), stdin);

    while(1) {
        if(str[i] != ' ' && str[i] != '\n' && str[i] != '\0') {
            word[len++] = str[i];
        }
        else {
            word[len] = '\0';

            if(len > max) {
                max = len;

                for(j = 0; j <= len; j++)
                    longest[j] = word[j];
            }

            len = 0;

            if(str[i] == '\0' || str[i] == '\n')
                break;
        }

        i++;
    }

    printf("%s", longest);

    return 0;
}