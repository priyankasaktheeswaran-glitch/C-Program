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
    int maxcount=0,result;
    for (int i=0;i<row;i++) {
        for (int j=0;j<column;j++) {
            int count=0;
            for (int k=0;k<row;k++) {
                for (int l=0;l<column;l++) {
                    if (arr[i][j]==arr[k][l]) {
                        count++;
                    }
                }
                if (count>maxcount) {
                    maxcount=count;
                    result=arr[i][j];
                }
            }
        }
    }
    printf("%d",result);
    return 0;
}