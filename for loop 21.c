#include<stdio.h>
int main() {
    int n;
    int decimal=0,base=1,rem;
    scanf("%d",&n);
    for (int N=n;N>0;N/=10) {
        rem=N%10;
        decimal+=decimal+rem*base;
        base=base*2;
    }
    printf("%d",decimal);
    return 0;
}