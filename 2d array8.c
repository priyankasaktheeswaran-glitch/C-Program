#include<stdio.h>
int main() {
    int row,columns;
    printf("enter row and columns:");
    scanf("%d %d",&row,&columns);
    int arr[row][columns];
    printf("enter values:\n");
    for(int i=0;i<row;i++) {
        for(int j=0;j<columns;j++) {
            scanf("%d",&arr[i][j]);
        }
    }
    int max=arr[0][0]+arr[0][1]+arr[1][0]+arr[1][1];
    int sum=0;
    for(int i=0;i<row-1;i++) {
        for(int j=0;j<columns-1;j++) {
            sum=arr[i][j]+arr[i][j+1]+arr[i+1][j]+arr[i+1][j+1];
            if (sum>max) {
                max=sum;
            }
        }
    }
    printf("%d",max);
    return 0;
}