#include<stdio.h>
int main() {
    int a,b,sum=0;
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;i+=a) {
        sum=sum+i;
    }
    printf("%d",sum);
    return 0;
}