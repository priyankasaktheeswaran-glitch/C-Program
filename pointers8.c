#include <stdio.h>
void concatenate(char *str1, char *str2) {
    while (*str1!='\0') {
        str1++;
    }
    while (*str2!='\0') {
        *str1=*str2;
        str1++;
        str2++;
    }
    *str1='\0';
}

int main() {
    char str1[100];
    char str2[50];
    scanf("%s",&str1);
    scanf("%s",&str2);
    concatenate(str1, str2);
    printf("%s", str1);
    return 0;
}
