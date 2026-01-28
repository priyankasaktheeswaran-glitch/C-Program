#include <stdio.h>
int main(){
    int vehicle, trips;
    scanf("%d %d",&vehicle,&trips);
    switch(vehicle){
        case 1:
            if(trips == 1)
                printf("₹100");
            else
                printf("₹800");
            break;
        case 2:
            printf("₹%d", trips * 240);
            break;
        default:
            printf("Invalid Vehicle Type");
    }
}
