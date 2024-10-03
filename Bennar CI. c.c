//program to calculate compound intrest
/*
Name:Benard kimani 
Reg:CT101/G/23293/24
*/
#include<stdio.h>
#include<math.h>
int main(){
float principal,rate,time,compoundinterest,period;
int n;
printf("Enter principal amount:\n");
scanf("%f",&principal);
printf("Enter rate of interest:\n");
scanf("%f",&rate);
printf("Enter time (in years):\n");
scanf("%f",&time);
printf("Enter the number of times the interest is compounded per year:\n");
scanf("%d",&n);

period=n*time;

compoundinterest=principal*pow(1+(rate/100)/n,period);

printf("compound interest=%.2f",compoundinterest);
return 0;
}