#include <stdio.h>
int isPalindrome(char *str) {
    char *start=str;
    char *end=str;
    while (*end!='\0') {
        end++;
    }
    end--;
    while (start<end) {
        if (*start!=*end) {
            return 0;
        }
        start++;
        end--;
    }

    return 1;
}
int main() {
    char str[101];
    scanf("%s", str);
    if (isPalindrome(str)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}
