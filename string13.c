#include<stdio.h>
#include <string.h>

int main() {
    char str[100],target;
    int index=-1;
    fgets(str,100,stdin);
    scanf("%c",&target);
    for (int i=0;str[i]!='\0';i++) {
        if (str[i]==target) {
            index=i;
            break;
        }
    }
    printf("%d",index);
    return 0;
}