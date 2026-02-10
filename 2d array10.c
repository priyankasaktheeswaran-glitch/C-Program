#include <limits.h>
#include<stdio.h>
int main() {
    int row,column;
    printf("enter rows and columns:");
    scanf("%d %d",&row,&column);
    int arr[row][column];
    printf("enter the values for array:\n");
    for (int i=0;i<row;i++) {
        for (int j=0;j<column;j++) {
            scanf("%d",&arr[i][j]);
        }
    }
    int index=0;
    int maxproduct=INT_MIN;
    for (int i=0;i<row;i++) {
        int product=1;
        for (int j=0;j<column;j++) {
            product=product*arr[i][j];
        }
        if (product>maxproduct) {
            maxproduct=product;
            index=i;
        }
    }
    printf("%d",index);
    return 0;
}