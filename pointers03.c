#include <stdio.h>
#include <string.h>

int vowel(char *str) {
    int count=0;
    while (*str!='\0') {
        char ch = *str;
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
           ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') {
            count++;
        }
        str++;
    }
    return count;
}
int main() {
    char str[100];
    fgets(str,sizeof(str),stdin);
    int count=vowel(str);
    printf("%d",count);
    return 0;
}