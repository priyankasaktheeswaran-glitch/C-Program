#include <stdio.h>
int main() {
    int n;
    char ch='A';
    scanf("%d",&n);
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=n-i;j++) {
            printf(" ");
        }
        for (int k=0;k<i;k++) {
            printf("%c",ch+k);
        }
        for (int k=i-2;k>=0;k--) {
            printf("%c",ch+k);
        }
        printf("\n");
    }
    return 0;
}
