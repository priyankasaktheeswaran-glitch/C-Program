#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int i=0;
    fgets(str,sizeof(str),stdin);
    while (str[i]!='@') {
        printf("%c",str[i]);
        i++;
    }
    return 0;
}