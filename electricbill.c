//Electric bill calculator
#include<stdio.h>
#include<math.h>
/*
Name:Benard kimani
Reg no:CT101/G/23293/24
Date:6/10/2024
*/
int main () {
    int customer_ID,unit_consumed;
    char customer_Name[15];
    float charge_per_unit,surcharge_amount,Total_amount;
    printf("Enter Name:");
    scanf("%14s",&customer_Name);
    printf("Enter customer ID:");
    scanf("%d",&customer_ID);
    printf("enter unit consumed:");
    scanf("%d",&unit_consumed);

    Total_amount=unit_consumed*charge_per_unit;

    if(unit_consumed<=199)
     {charge_per_unit =1.20;
     	Total_amount=unit_consumed*1.20;
     	}
        else if
        (unit_consumed>=200 , unit_consumed<=400)
        {charge_per_unit=1.50;
        	Total_amount=unit_consumed*1.50;
        	}
        else if
        (unit_consumed>=400 , unit_consumed<600)
        {charge_per_unit=1.80;
        	Total_amount=unit_consumed*1.80;
        	}
        else{charge_per_unit=2.00;
        	Total_amount=unit_consumed*2.00;
        	}
        
     
    if (Total_amount>400)
    {
    	surcharge_amount=Total_amount*0.15;
        Total_amount= Total_amount+surcharge_amount;
    }
    
    if (Total_amount<100)
    { Total_amount=100;}

    

    printf("\nCustomer Name:%s\n", customer_Name);
    printf("Customer ID:%d \n", customer_ID);
    printf("Unit consumed: %d \n", unit_consumed);
    printf("Charge per unit: %.2f\n ", charge_per_unit);
    printf("Total amount to pay: %.2f\n",Total_amount);

    return 0;
}
