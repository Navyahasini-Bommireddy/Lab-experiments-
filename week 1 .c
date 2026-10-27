#include<stdio.h>
int main(){
int i;
long int k;
short int s;
unsigned int x;
float fi;
char ch;
double d;
long double ld;
printf("Enter a charater:");
scanf("%c",&ch);
printf("Enter an Interger:");
scanf("%d",&i);
printf("Enter an Long Interger:");
scanf("%ld",&k);
printf("Enter an Short Interger:");
scanf("%hd",&s);
printf("Enter an Unsigned Interger:");
scanf("%u",&x);
printf("Enter a float:");
scanf("%f",&fi);
printf("Enter a double:");
scanf("%lf",&d);
printf("Enter a long double:");
scanf("%Lf",&ld);
printf("Integer is %d\t float is %f\t character is %c double is %lf\t long double is %Lf",i,fi,ch,d,ld);
printf("\nlong Integer is %ld\t short integer is %hd\t unsigned integer is %u",k,s,x);
return 0;
}
