#include <stdio.h>
int main() {
    int n = 5;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            printf("  ");
        }
        for (char ch = 'E' - i; ch <= 'E'; ch++) {
            printf("%c ", ch);
        }
        printf("\n");
    }
    return 0;
}