#include <stdio.h>
#include <string.h>
int count(char *str) {
    int count=0;
    int words=0;
    for (int i=0;str[i]!='\n';i++) {
        if (str[i]==' ') {
            count++;
            words=count+1;
        }
    }
    return words;
}
int main() {
    char str[100];
    fgets(str,sizeof(str),stdin);
    int words=count(str);
    printf("%d",words);
    return 0;
}