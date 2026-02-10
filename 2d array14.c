#include <stdio.h>
#include <limits.h>
int main() {
    int row,column;
    printf("enter rows and columns:");
    scanf("%d %d",&row,&column);
    int arr[row][column];
    printf("enter the values for array:\n");
    for(int i=0;i<row;i++) {
        for(int j=0;j<column;j++) {
            scanf("%d",&arr[i][j]);
        }
    }
    int maxsum=INT_MIN;
    int index=0;
    for (int j=0;j<column;j++) {
        int sum=0;
        for (int i=0;i<row;i++) {
            sum=sum+arr[i][j];
        }
        if (sum>maxsum) {
            maxsum=sum;
            index=j;
        }
    }
    printf("%d",index);
    return 0;
}