#include <stdio.h>

int main(void) {
    int i, j;
    int n = 6, m = 7;

    /* Gør følgende n gange */
    for (j = 0; j < n; ++j) {
        printf("%d", j);
        /* Lav én linje med m stjerner */
        for (i = 1; i <= m; ++i) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
