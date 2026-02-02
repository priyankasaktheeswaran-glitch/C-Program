#include <stdio.h>
int main() {
    int data,n, i=0,x,days=0;
    scanf("%d%d",&data,&n);
    while(i<n&&data>0) {
        scanf("%d",&x);
        data-=x;
        days++;
        i++;
    }
    if(data<0)
        data=0;
    printf("Days Used: %d\nRemaining Data: %dGB",days,data);
}
