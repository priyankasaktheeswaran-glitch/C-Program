#include <stdio.h>
int table(int n) {
    for (int i = 1; i <= 10; i++) {
        printf("%d*%d=%d\n",n,i,n*i);
    }
}
int main() {
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    table(n);
    return 0;

}