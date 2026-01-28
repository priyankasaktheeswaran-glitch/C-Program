#include <stdio.h>
int main(){
    int type,years;
    scanf("%d %d",&type,&years);

    switch(type){
        case 1:
            printf("Interest 4%%");
            break;
        case 2:
            if(years <= 3)
                printf("Interest 5%%");
            else
                printf("Interest 7%%");
            break;
        default:
            printf("Invalid Account Type");
    }
}
