#include<stdio.h>
int isvowel(char *n) {
    return (*n=='a' || *n=='e' || *n=='i' || *n=='o' || *n=='u' ||
        *n=='A' || *n=='E' || *n=='I' || *n=='O' || *n=='U');
}
int main() {
    char str[100];
    scanf("%s",str);
    char *p=str;
    int count=0;
    while (*p!='\0') {
        if (isvowel(p)) {
            break;
        }
        count++;
        p++;
    }
    printf("%d",count);
    return 0;
}