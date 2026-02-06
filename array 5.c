#include <stdio.h>
int main() {
    int size;
    scanf("%d",&size);
    int array[size],sum=0;
    for (int i=0;i<size;i++) {
        scanf("%d",&array[i]);
        sum=sum+array[i];
    }
    int total=size*(size+1)/2;
    int missing=total-sum;
    printf("%d",missing);
    return 0;
}