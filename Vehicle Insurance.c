#include <stdio.h>
int main(){
    int cat,age;
    scanf("%d %d",&cat,&age);
    switch(cat){
        case 1:
            if(age <= 5)
                printf("₹1500");
            else
                printf("₹2500");
            break;
        case 2:
            if(age <= 5)
                printf("₹4000");
            else
                printf("₹6000");
            break;
        default:
            printf("Invalid Category");
    }
}
