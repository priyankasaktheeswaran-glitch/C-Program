#include<stdio.h>
#include<string.h>
int main() {
    char str[100];
    fgets(str,sizeof(str),stdin);
    int length=strlen(str);
    for (int i=length-1;i>=0;i--) {
        printf("%c",str[i]);
    }
    return 0;
}