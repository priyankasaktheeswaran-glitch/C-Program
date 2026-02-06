#include<stdio.h>
int main() {
    int size;
    scanf("%d",&size);
    int array[size];
    for (int i=0;i<size;i++) {
        scanf("%d",&array[i]);
    }
    int duplicate=1;
    for (int i=0;i<size-1;i++) {
        if (array[i]>array[i+1]) {
            duplicate=0;
            break;
        }
    }
    if (duplicate==1) {
        printf("Yes");
    }
    else {
        printf("No");
    }
}
