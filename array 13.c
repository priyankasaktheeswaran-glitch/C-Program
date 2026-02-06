#include <stdio.h>
int main() {
    int size;
    scanf("%d",&size);
    int arr[size],sum=0,count=0;
    for (int i=0;i<size;i++) {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    float avg=sum/(float)size;
    for (int i=0;i<size;i++) {
        if (arr[i]>avg) {
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}
