#include <stdio.h>
int main(){
    int n,a[100],flag=1;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<n-1;i++)
        if(a[i]>a[i+1])
            flag=0;
    if(flag)
        printf("Yes");
    else
        printf("No");
    return 0;
}
