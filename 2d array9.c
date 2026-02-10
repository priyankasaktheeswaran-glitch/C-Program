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
    int even=0,odd=0;
    for (int i=0;i<row;i++) {
        for (int j=0;j<column;j++) {
            if (arr[i][j]%2==0) {
                even++;
            }
            else {
                odd++;
            }
        }
        if (even==odd) {
            count++;
        }
    }
    printf("%d",count);
}