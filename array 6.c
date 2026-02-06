#include<stdio.h>
int main() {
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
        scanf("%d",&arr[i]);
        for(int j=0;j<size;j++)
            if (arr[i]==arr[j]) {
                first=1;
                printf("%d",arr[j]);
            }
            else {
                printf("%d",arr[i]);
            }
        return 0;
}