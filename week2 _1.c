
#include <stdio.h>
int main(){
    int a,b,c,sum;
    float avg;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    printf("Enter c:");
    scanf("%d",&c);
    sum=a+b+c;
    printf("The sum of %d,%d and %d is %d",a,b,c,sum);
    avg=(float)sum/3;
    printf("\nThe average is %f",avg);
    return 0;
}
