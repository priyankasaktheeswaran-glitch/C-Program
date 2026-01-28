#include <stdio.h>
int main(){
    int amount, speed;
    scanf("%d %d", &amount, &speed);

    switch(speed){
        case 1:
            printf("Delivery ₹50");
            break;

        case 2:
            if(amount < 1000)
                printf("Delivery ₹100");
            else
                printf("Delivery ₹0");
            break;

        default:
            printf("Invalid Delivery Type");
    }
}

