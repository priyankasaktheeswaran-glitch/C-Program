#include <stdio.h>
int main() {
    int size;
    scanf("%d",&size);
    int array[size];
    for (int i=0;i<size;i++) {
        scanf("%d",&array[i]);
    }
    int sum=0,count=0,max=0,min;
    for (int j=0;j<size;j++) {
        sum=sum+array[j];
        count++;
    }
    for (int k=0;k<size;k++) {
        if (array[k]>max) {
            max=array[k];
        }
        if (array[k]<min) {
            min=array[k];
        }
    }
    printf("%d total votes\n",sum);
    printf("%d max votes\n",max);
    printf("%d min votes",min);
    return 0;
}