#include <stdio.h>
int main() {
    int num,sum=0;
    scanf("%d",&num);
    if (num<=0) {
        printf("no");
    }
    for (int i=1;i<=num;i++) {
        if (num%i==0)
            sum=sum+i;
    }
    if (sum==num) {
        printf("yes");
    }
    else {
        printf("no");
    }
    return 0;
}