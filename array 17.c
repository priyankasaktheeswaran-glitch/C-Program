#include<stdio.h>
int main() {
    int size;
    scanf("%d",&size);
    int arr[size];
    for (int i=0;i<size;i++) {
        scanf("%d",&arr[i]);
    }
    int palindrome=1;
    for (int i=0;i<size/2;i++) {
        if (arr[i]==arr[size-i-1]) {
            palindrome=0;
            break;
        }
    }
    if (palindrome) {
        printf("yes");
    }
    else {
        printf("no");
    }
    return 0;
}