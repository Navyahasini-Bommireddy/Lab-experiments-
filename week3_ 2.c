
#include <stdio.h>
#include <math.h>
int main(){
    double p,r,t,ci,amount;
    printf("Enter principal amount:");
    scanf("%lf",&p);
    printf("Enter rate of interest:");
    scanf("%lf",&r);
    printf("Enter time:");
    scanf("%lf",&t);
    amount=p*((pow((1+r/100),t)));
    ci = amount-p;
    printf("The compound Interest is %lf",ci);
}
