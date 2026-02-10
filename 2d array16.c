#include <limits.h>
#include <stdio.h>
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
    int minsum=INT_MAX;
    int index=-1;
    for(int i=0;i<row;i++) {
        int sum=0;
        for(int j=0;j<column;j++) {
            sum+=arr[i][j];
        }
        if (sum!=0 && sum<minsum) {
            minsum=sum;
            index=i;
        }
    }
    printf("%d",index);
    return 0;
}