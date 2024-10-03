//program to calculate simple interest 
/*
Name:Benard kimani
Reg:CT101/G/23293/24
*/
#include<stdio.h>
int main() {
    float p,r,t,si;
    printf("Enter principle:");
    scanf("%f",&p);
    printf("enter rate:");
    scanf("%f",&r);
    printf("enter time:");
    scanf("%f",&t);
    
    si=(p*r*t)/100;
    
    printf("simple interest=%.2f",si);
    return 0;
    }