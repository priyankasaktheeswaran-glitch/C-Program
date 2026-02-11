#include<stdio.h>
#include<string.h>
int main() {
    char str[100];
    int found=1;
    scanf("%s",str);
    int len=strlen(str);
    for (int i=0;i<len/2;i++) {
        if (str[i]!=str[len-i-1]) {
            found=0;
            break;
        }
    }
    if (found==1) {
        printf("palidrome");
    }
    else {
        printf("not palidrome");
    }
    return 0;
}