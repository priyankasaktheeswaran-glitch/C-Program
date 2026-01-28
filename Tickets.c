#include <stdio.h>
int main(){
    int cls, age;
    float fare;
    scanf("%d %d",&cls,&age);
    switch(cls){
        case 1:
            fare=300;
            if(age<12)
                fare *= 0.5;
            else if(age >= 60)
                fare *= 0.67;
            printf("Fare ₹%.0f", fare);
            break;

        case 2:
            fare = 1000;
            if(age < 12)
                fare *= 0.5;
            printf("Fare ₹%.0f", fare);
            break;

        default:
            printf("Invalid Class");
    }
}
