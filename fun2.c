#include<stdio.h>
int larger(int a,int b) {
    if (a>b)
        return a;
    else
        return b;
}
int main () {
    int a,b;
    scanf("%d %d",&a,&b);
    int max=larger(a,b);
    printf("%d",max);
    return 0;
}