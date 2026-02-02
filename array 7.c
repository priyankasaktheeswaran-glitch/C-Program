#include <stdio.h>
int main(){
    int n,a[100],even=0,odd=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]%2==0)
            even++;
        else odd++;
    }
    printf("Even:%d Odd:%d",even,odd);
    return 0;
}
