#include <stdio.h>
int main(){
    int n,k,a[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&k);
    for(int i=k;i<n;i++)
        printf("%d ",a[i]);
    for(int i=0;i<k;i++)
        printf("%d ",a[i]);
    return 0;
}
