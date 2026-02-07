#include <stdio.h>
int main() {
    int n,k,l;
    int space;
    scanf("%d",&n);
    for (int i=1;i<=n;i++) {
        for (int j=1;j<i;j++) {
            printf("%d" ,j);
        }
        for (k=1;i<space;k++) {
            printf(" ");
        }
        for (l=i;l>0;l--) {
            printf("%d",l);
        }
        printf("\n");
    }
    return 0;
}