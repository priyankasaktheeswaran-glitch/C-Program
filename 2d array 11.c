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
        int sorted=1;
        for (int j=0;j<column-1;j++) {
            if (arr[i][j]>arr[i][j+1]) {
                sorted=0;
                break;
            }
        }
        if (sorted) {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}