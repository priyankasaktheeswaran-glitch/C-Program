#include<stdio.h>
int perfect(int n) {
    int sum=0;
    for(int i=1;i<=n/2;i++) {
        if(n%i==0) {
            sum=sum+i;
        }
    }
    if (sum==n) {
        printf("perfect number");
    }
    else {
        printf("not perfect number");
    }
    return 0;
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    perfect(n);
    return 0;
}