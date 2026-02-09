#include<stdio.h>
int main() {
    int rows,columns;
    printf("enter the rows and columns:");
    scanf("%d %d",&rows,&columns);
    int arr[rows][columns];
    printf("enter values:\n");
    for(int i=0;i<rows;i++) {
        for(int j=0;j<columns;j++) {
            scanf("%d",&arr[i][j]);
        }
    }
    int row_sum[rows];
    for(int i=0;i<rows;i++) {
        int sum=0;
        for(int j=0;j<columns;j++) {
            sum+=arr[i][j];
        }
        row_sum[i]=sum;
    }
    int max_diff=0;
    for(int i=0;i<rows;i++) {
        for (int j=i+1;j<rows;j++) {
            int diff=row_sum[i]-row_sum[j];
            if (diff<0) {
                diff=-diff;
                if (diff>max_diff) {
                    max_diff=diff;
                }
            }
        }
        printf("%d",max_diff);
        return 0;
    }
}