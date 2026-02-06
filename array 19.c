#include <stdio.h>
int main() {
    int size;
    scanf("%d",&size);
    int arr[size];
    for (int i=0;i<size;i++) {
        scanf("%d",&arr[i]);
    }
    int count=0;
    for (int i=0;i<size;i++) {
        int duplicate=0;
        for (int j=0;j<i;j++) {
            if (arr[i]==arr[j]) {
                duplicate=1;
                break;
            }
        }
        if (duplicate==0) {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}