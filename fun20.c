#include<stdio.h>
int operation(int n1,int n2,char operator) {
    switch (operator) {
        case '+':
            return n1+n2;
        case '-':
            return n1-n2;
        case '*':
            return n1*n2;
        case '/':
            return n1/n2;
        default:
            return 0;
    }
}

int main() {
    int n1,n2;
    char operator;
    scanf("%d %d %c",&n1,&n2,&operator);
    printf("%d",operation(n1,n2,operator));
    return 0;
}