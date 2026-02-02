#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int i=0;
    int value;
    int success=0;
    int cancelled=0;
    while(i<n) {
        scanf("%d",&value);
        if(value==1)
            success++;
        else
            cancelled++;
        i++;
    }
    printf("%d\n",success);
    printf("%d\n",cancelled);

    if (cancelled>success)
        printf("status:risk\n");
    else
        printf("status:safe\n");
    return 0;
}
