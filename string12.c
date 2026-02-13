#include<stdio.h>
#include<string.h>
int main() {
    char str[100];
    int count=0;
    scanf("%s",str);
    for (int i=0;str[i]!='\0';i++) {
        if (!((str[i]>='a' && str[i]<='z')||(str[i]>='A' && str[i]<='Z')||(str[i]>='0' && str[i]<='9'))){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}