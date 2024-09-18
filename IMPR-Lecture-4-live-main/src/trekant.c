#include <stdio.h>

int main(void) {
    int i, j;
    int n = 8;

    /* Gør følgende n gange */
    for (j = 0; j < n; ++j) {
        printf("%d", j);
        /* Lav én linje med j stjerner */
        for (i = 1; i <= j; ++i) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
