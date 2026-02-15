#include <stdio.h>
#include <string.h>
int copystr(char *str,char *copy) {
    while(*str!='\0') {
        *copy=*str;
        str++;
        copy++;
    }
    *copy='\0';
}
int main() {
    char str[100];
    char copy[101];
    fgets(str,sizeof(str),stdin);
    copystr(str,copy);
    printf("%s",copy);
    return 0;
}