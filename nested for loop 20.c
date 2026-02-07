#include <stdio.h>
int main() {
    int i, j, space;
    int n = 5;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++)
            printf("*");
        for (space = 1; space <= 2*(n - i); space++)
            printf(" ");
        for (j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }
    for (i = n - 1; i >= 1; i--) {
        for (j = 1; j <= i; j++)
            printf("*");
        for (space = 1; space <= 2*(n - i); space++)
            printf(" ");
        for (j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
