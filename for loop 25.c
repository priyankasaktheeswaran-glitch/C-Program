#include <stdio.h>
int main() {
    int n, temp, digit, count = 0;
    int sum = 0, i, power;
    scanf("%d", &n);
    temp = n;
    while (temp != 0) {
        count++;
        temp = temp / 10;
    }
    temp = n;
    while (temp != 0) {
        digit = temp % 10;
        power = 1;
        for (i = 1; i <= count; i++) {
            power = power * digit;
        }
        sum = sum + power;
        temp = temp / 10;
    }
    if (sum == n)
        printf("Yes");
    else
        printf("No");
    return 0;
}
