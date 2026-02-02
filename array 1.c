#include <stdio.h>
int main() {
    int n, a[100], max1, max2;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<n;i++){
        if(a[i]>max1){
            if(a[i]!=max1)
                max2=max1;
            max1=a[i];
        }
        else if(a[i]>max2 && a[i]!=max1){
            max2=a[i];
        }
    }
    printf("largest: %d\n",max1);
    printf("second: %d\n",max2);
    printf("output: %d\n",max2);
    return 0;
}
