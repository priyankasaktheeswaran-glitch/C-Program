#include<stdio.h>
int sum(int N) {
    int sum=0;
    while (N>0) {
        sum=sum+N%10;
        N=N/10;
    }
    return sum;
}
int main() {
    int N;
    scanf("%d",&N);
    printf("%d",sum(N));
    return 0;
}