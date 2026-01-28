#include <stdio.h>
int main(){
    int type,score;
    scanf("%d %d",&type,&score);
    switch(type){
        case 1:
            if(score >= 700)
                printf("Approved");
            else if(score >= 650)
                printf("Manual Review");
            else
                printf("Rejected");
            break;
        case 2:
            if(score >= 700)
                printf("Approved");
            else
                printf("Rejected");
            break;
        default:
            printf("Invalid Loan Type");
    }
}
