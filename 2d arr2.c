#include<stdio.h>
int main() {
    int row,column;
    printf("Enter the number of rows and columns value:");
    scanf("%d %d",&row,&column);
    int arr[row][column];
    printf("enter the value for array element:");
    for(int i=0;i<row;i++) {
        for(int j=0;j<column;j++) {
            scanf("%d",&arr[i][j]);
        }
    }
    int maxsum=0;
    int maxmonth;
    for(int k=0;k<row;k++) {
        int sum=0;
        for(int l=0;l<column;l++) {
            sum=sum+arr[k][l];
        }
        if (sum>maxsum) {
            maxsum=sum;
            maxmonth=k;
        }
    }
    printf("%d has the hightest sales",maxmonth+1);
    return 0;
}
