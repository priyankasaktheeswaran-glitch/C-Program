#include<stdio.h>
int main() {
    int row,column;
    printf("enter the value forrow and column: ");
    scanf("%d %d",&row,&column);
    int arr[row][column];
    printf("enter the value for array: \n");
    for(int i=0;i<row;i++) {
        for(int j=0;j<column;j++) {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<row;i++) {
        int sum=0;
        for(int j=0;j<column;j++) {
            sum=sum+arr[i][j];
        }
        printf("%d student mark is %d \n",i+1,sum);
    }
    return 0;
}