#include <stdio.h>
int main() {
    int n,num,count=0;
    scanf("%d",&num);
    n=num;
    while (n>=0) {
        num=num/10;
        count++;
    }
    printf("%d",count);
    return 0;
}

