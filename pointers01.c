#include<stdio.h>
void swap(int *a,int *b) {
    int temp=*a;
    *a=*b;
    *b=temp;
    printf("swap is done\n");
}
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    printf("before swapping %d %d\n",a,b);
    swap(&a,&b);
    printf("after swapping %d %d\n",a,b);
    return 0;
}