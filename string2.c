#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int found=0;
    fgets(str,sizeof(str),stdin);
    for (int i=0;str[i]!='\0';i++) {
        if (str[i]>='A' && str[i]<='Z') {
            found=1;
            break;
        }
    }
    if (found==1) {
        printf("Valid");
    }
    else {
        printf("Invalid");
    }
    return 0;
}