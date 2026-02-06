#include<stdio.h>
int main() {
    int size;
    scanf("%d",&size);
    int array[size];
    for (int i=0;i<size;i++) {
        scanf("%d",&array[i]);
    }
    for (int j=0;j<size;j++) {
        if (array[j]<0) {
            array[j]=0;
        }
    }
    for (int k=0;k<size;k++) {
        printf("%d",array[k]);
    }
    return 0;
}