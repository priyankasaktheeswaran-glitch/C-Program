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
    int count=0;
    for (int i=0;i<row;i++) {
        int flag=1;
        for (int j=0;j<column/2;j++) {
            if (arr[i][j]!=arr[i][column-j-1]) {
                flag=0;
                break;
            }
        }
        if (flag==1) {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}