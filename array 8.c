#include<stdio.h>
int main() {
    int size;
    scanf("%d",&size);
    int arr[size],k;
    for(int i=0;i<size;i++)
        scanf("%d",&arr[i]);
        scanf("%d",&k);
        for(int i=k;i<size;i++)
            printf("%d ",arr[i]);
        for(int i=0;i<k;i++)
            printf("%d ",arr[i]);
    return 0;
}