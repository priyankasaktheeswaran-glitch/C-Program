#include <stdio.h>
int prime(int n) {
    if (n<=1) {
        return 0;
    }
    for (int i=2; i<n; i++) {
        if (n%i==0) {
            return 0;
        }
    }
    return 1;
}
int main() {
    int n;
    scanf("%d",&n);
    if (prime(n)) {
        printf("prime");
    }
    else {
        printf("not prime");
    }
    return 0;
}