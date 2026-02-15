#include<stdio.h>
int leap(int year) {
    if(year%400==0) {
        printf("leap year");
    }
    else if(year%100==0) {
        printf("not leap year");
    }
    else if(year%4==0) {
        printf("leap year");
    }
    else {
        printf("not leap year");
    }
    return leap;
}
int main() {
    int year;
    printf("Enter year:");
    scanf("%d",&year);
    leap(year);
    return 0;
}