#include <stdio.h>
int distinct(int size,int arr[]) {
    int count=0;
    for (int i=0;i<size;i++) {
        int distinct=1;
        for (int j=i+1;j<size;j++) {
            if (arr[i]==arr[j]) {
                distinct=0;
                break;
            }
        }
        if (distinct==1) {
            count++;
        }
    }
    return count;
}
    int main() {
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++) {
        scanf("%d",&arr[i]);
    }
    int total=distinct(size,arr);
    printf("%d",total);
    return 0;
}