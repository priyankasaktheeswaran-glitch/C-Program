#include <stdio.h>
int main() {
    int n,i=0,x,cur=0,max=0;
    scanf("%d",&n);
    while(i<n) {
        scanf("%d",&x);
        if(x==0) {
            cur++;
            if(cur>max)
                max = cur;
        }
        else
            cur = 0;
        i++;
    }
    printf("Longest Failure Streak: %d",max);
}
