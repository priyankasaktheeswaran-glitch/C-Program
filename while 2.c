#include<stdio.h>
int main() {
    int n,i=0,bal,t,low=0;
    scanf("%d %d",&n,&bal);
    while(i<n) {
        scanf("%d",&t);
        bal+=t;
        if (bal<2000)
            low++;
        i++;
    }
    printf("Final balance:%d\nLow balance days: %d",bal,low);
}
