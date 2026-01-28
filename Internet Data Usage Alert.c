#include <stdio.h>
int main(){
    int plan;
    float used;
    scanf("%d %f",&plan,&used);
    switch(plan){
        case 1:
            if(used<=1)
                printf("Normal Speed");
            else
                printf("Speed Reduced");
            break;
        case 2:
            if(used<=2)
                printf("Normal Speed");
            else
                printf("Extra Charges Applied");
            break;
        default:
            printf("Invalid Plan");
    }
}
