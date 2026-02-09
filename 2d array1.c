#include <stdio.h>
int main() {
    int row,column;
    printf("enter the value for rows and columns:");
    scanf("%d %d",&row,&column);
    int arr[row][column];
    printf("enter the value for array: \n");
    for(int i=0;i<row;i++) {
        for(int j=0;j<column;j++) {
            scanf("%d",&arr[i][j]);
        }
    }
    int max1=0,max2=0;
    for(int i=0;i<row;i++) {
        for(int j=0;j<column;j++) {
            if(arr[i][j]>max1) {
                max2=max1;
                max1=arr[i][j];
            }
            else if(arr[i][j]<max1 && arr[i][j]>max2) {
                max2=arr[i][j];
            }
        }
    }
    if (max2==0){
        printf("no second highest value");
    }
    else {
        printf("second highest salary is %d",max2);
    }
    return 0;
}