#include<stdio.h>
int digits(char str[]) {
    int count=0;
    for (int i=0;str[i]!='\0';i++) {
        if (str[i]>='0' && str[i]<='9') {
            count++;
        }
    }
    return count;
}

int main() {
    char str[50];
    fgets(str,50,stdin);
    int count=digits(str);
    printf("%d",count);
    return 0;
}

