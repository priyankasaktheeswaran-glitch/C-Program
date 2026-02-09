#include<stdio.h>
int main() {
    int rows,columns;
    printf("enter the values of rows and columns:");
    scanf("%d%d",&rows,&columns);
    int arr[rows][columns];
    printf("enter the values for array:");
    for(int i=0;i<rows;i++) {
        for(int j=0;j<columns;j++) {
            scanf("%d",&arr[i][j]);
        }
    }
    int max_unique = 0;
    int dept_index = 0;
    for(int i=1;i<rows;i++) {
        int unique_count=0;
        for(int j=1;j<columns;j++) {
            int count=0;
            for(int k=0;k<columns;k++) {
                if (arr[i][k]==arr[i][j]) {
                    count++;
                }
            }
            if (count==1) {
                unique_count++;
            }
        }
        if (unique_count>max_unique) {
            max_unique=unique_count;
            dept_index=i;
        }
    }
    printf("%d\n", dept_index);
    return 0;
}
