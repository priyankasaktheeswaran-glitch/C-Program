#include <stdio.h>
void integer(int n) {
    if (n%2==0) {
        printf("even");
    }
    else {
        printf("odd");
    }
}
int main () {
    int N;
    scanf("%d",&N);
    integer(N);
    return 0;
}