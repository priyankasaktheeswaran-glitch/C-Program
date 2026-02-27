#include <stdio.h>
int main() {
    int marks;
    printf("enter your marks : ");
    scanf("%d",&marks);
    if(marks>=95) {
        printf("grade A");
    }
    else if(marks>=85) {
        printf("grade B");
    }
    else if(marks>=75) {
        printf("grade C");
    }
    else if(marks>=65) {
        printf("grade D");
    }
    else if(marks>=45) {
        printf("grade E");
    }
    else if(marks<45) {
        printf("grade F");
    }
    return 0;
}