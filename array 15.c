#include<stdio.h>
int main() {
    int size;
    scanf("%d",&size);
    int array[size];
    for (int i=0;i<size;i++) {
        scanf("%d",&array[i]);
    }
    int position=0;
    for (int i=0;i<size;i++) {
        if (array[i]!=0) {
            array[position]=array[i];
            position++;
        }
    }
    while (position<size) {
        array[position]=0;
        position++;
    }
    for (int i=0;i<size;i++) {
        printf("%d ",array[i]);
    }
    return 0;
}