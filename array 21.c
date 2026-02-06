#include <stdio.h>
int main() {
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++) {
        scanf("%d",&arr[i]);
    }
    int result;
    for (int j=0;j<size;j++) {
        for (int k=j+1;k<size;k++) {
            if (arr[j]==arr[k]) {
                printf("%d",arr[j]);
                result=1;
                break;
            }
        }
        if (result==1)
            break;
    }
    if (result==0) {
        printf("-1");
    }
    return 0;
}