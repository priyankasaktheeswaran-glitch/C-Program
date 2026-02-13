#include <stdio.h>
int prime(int start,int end) {
    int sum=0;
    for (int i=start;i<=end;i++) {
        int fact=0;
        for (int j=1;j<=i;j++) {
            if (i%j==0) {
                fact++;
            }
        }
        if (fact==2) {
            sum=sum+i;
        }
    }
    printf("%d",sum);
    return sum;
}
int main () {
    int start,end;
    scanf ("%d %d",&start,&end);
    prime(start,end);
    return 0;
}