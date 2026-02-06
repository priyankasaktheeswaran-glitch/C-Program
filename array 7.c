#include <stdio.h>
int main() {
    int size;
    scanf("%d",&size);
    int arr[size],even=0,odd=0;
    for(int i=0;i<size;i++) {
        scanf("%d",&arr[i]);
        if (arr[i]%2==0) {
            even++;
        }
        else {
            odd++;
        }
    }
    printf("even: %d ",even);
    printf("odd: %d",odd);
    return 0;
}