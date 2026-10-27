
#include <stdio.h>
int main(){
    int i,J;
    printf("Enter value of i:");
    scanf("%d",&i);
    J = (i++) + (++i);
    printf("(i++) + (++i)=%d",J);
    printf("\ni = %d",i);
    return 0;
}
