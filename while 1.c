#include<stdio.h>
int main() {
    int n,i=0,x,count=0,streak=0,max=0;
    scanf("%d",&n);
    while(i<n){
        scanf("%d",&x);
        if(x>70){
            count++;
            streak++;
            if(streak>max)
                max=streak;
            else
                streak=0;
            i++;
        }
        printf("noise voilations:%d\n",count);
        printf("longest voilations:%d\n",max);
   }
    return 0;
}