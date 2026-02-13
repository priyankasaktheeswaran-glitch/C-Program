#include<stdio.h>
float circle(int R) {
    return(3.14*R*R);
}
int main() {
    int R;
    scanf("%d",&R);
    float area;
    area=circle(R);
    printf("%.2f",area);
    return 0;
}