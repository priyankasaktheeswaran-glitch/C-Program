#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    int total = 0;
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        total += arr[i];
    }

    int leftSum = 0;
    int found = 0;

    for(int i = 0; i < n; i++) {
        int rightSum = total - leftSum - arr[i];
        if(leftSum == rightSum) {
            printf("%d", i);
            found = 1;
            break;
        }
        leftSum += arr[i];
    }

    if(!found)
        printf("-1");

    return 0;
}
