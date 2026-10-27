
#include <stdio.h>
int main(){
    float A,B,C,result;
    int D;
    printf("Enter value of A:");
    scanf("%f",&A);
    printf("Enter value of B:");
    scanf("%f",&B);
    printf("Enter value of C:");
    scanf("%f",&C);
    printf("Enter value of D:");
    scanf("%d",&D);
    
    result = A/B*C-B+A*D/3;
    printf("A/B*C-B+A*D/3 = %f",result);
    return 0;
}
