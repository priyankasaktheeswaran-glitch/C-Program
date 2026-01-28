#include <stdio.h>
int main(){
    int mode;
    char cat;
    scanf("%d %c",&mode,&cat);
    switch(mode){
        case 1:
            if(cat=='R')
                printf("₹5000");
            else if(cat=='S')
                printf("₹3000");
            else
                printf("Invalid Category");
            break;
        case 2:
            if(cat=='R')
                printf("₹9000");
            else if(cat=='S')
                printf("₹7000");
            else
                printf("Invalid Category");
            break;
        default:
            printf("Invalid Mode");
    }
}
