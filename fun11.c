#include <stdio.h>
#include <string.h>
int count(long long int n) {
    int count = 0;
    if (n == 0) {
        count++;
    }
    while (n>0) {
        n=n/10;
        count++;
    }
    return count;
}
int main() {
    long long int n;
    scanf("%lld",&n);
    printf("%d",count(n));
    return 0;
}