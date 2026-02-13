#include <stdio.h>
float calculate(int P,int R,int T) {
    return (P*R*T)/100.0;
}
int main() {
    int P,R,T;
    float interest;
    scanf("%d %d %d",&P,&R,&T);
    interest=calculate(P,R,T);
    printf("%.2f",interest);
    return 0;
}