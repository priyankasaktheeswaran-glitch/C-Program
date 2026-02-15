#include<stdio.h>
#include <string.h>
int palindrome(char str[]) {
    int len=strlen(str);
    for (int i=0;i<len/2;i++) {
        if (str[i]!=str[len-i-1]) {
            return 0;
        }
    }
    return 1;
}
int main() {
    char str[50];
    fgets(str,50,stdin);
    if (palindrome(str)) {
        printf("palindrome");
    }
    else {
        printf("not palindrome");
    }
    return 0;
}

