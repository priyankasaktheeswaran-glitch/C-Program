#include<stdio.h>
#include<string.h>
int main() {
    char str[100];
    int count=0,i=0;
    scanf("%s",str);
    while (str[i]!='\0') {
        count++;
        i++;
    }
    printf("%d",count);
    return 0;
}
