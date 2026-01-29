#include<stdio.h>
int main() {
    int n,power=0;
    int result=1;
    scanf("%d %d",&n,&power);
    for(int i=1;i<=power;i++) {
        result=result*n;
    }
    printf("%d",result);
    return 0;
}


