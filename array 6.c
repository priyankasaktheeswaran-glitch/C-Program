#include <stdio.h>
int main(){
    int n,a[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<n;i++){
        int flag=1;
        for(int j=0;j<i;j++)
            if(a[i]==a[j])
                flag=0;
        if(flag)
            printf("%d ",a[i]);
    }
    return 0;
}
