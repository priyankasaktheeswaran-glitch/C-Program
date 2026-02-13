#include <stdio.h>
int search(int size,int arr[],int element) {
    int found=0,index=0;
    for (int i=0;i<size;i++) {
        if (arr[i]==element) {
            found=1;
            index=i;
        }
    }
    if (found==1) {
        printf("element found at  %d\n",index);
    }
    else {
        printf("element not found\n");
    }
    return found;
}
int main() {
    int size;
    scanf("%d", &size);
    int arr[size];
    for (int i=0;i<size;i++) {
        scanf("%d", &arr[i]);
    }
    int element;
    printf("enter the target element:\n");
    scanf("%d", &element);
    search(size,arr,element);
    return 0;
}
