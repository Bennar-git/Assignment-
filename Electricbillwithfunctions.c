//functions for electric bill calculator
/*
Name:Benard Kimani
RagNo:CT101/G/23293/24
*/

#include <stdio.h>

float calculate_total_bill(int units) {
    float charge_per_unit, total_bill;
  
    if (units <= 199) {
        charge_per_unit = 1.20;
        total_bill = units * charge_per_unit;}
     else if (units >= 200 , units < 400) {
        charge_per_unit = 1.50;
        total_bill = units * charge_per_unit;}
      else if (units >= 400  , units < 600) {
        charge_per_unit = 1.80;
        total_bill = units * charge_per_unit;}
      else {
        charge_per_unit = 2.00;
        total_bill = units * charge_per_unit;}
    
 
       if (total_bill > 400) {
        total_bill += total_bill * 0.15;  
    }

        if (total_bill < 100) {
        total_bill = 100;
    }

  
      return total_bill;
}


int main() {
    
    
    char customer_name[30];
    int customer_id;
    float total_bill, unit_consumed ;

    
    printf("Enter your name: ");
    scanf("%s", &customer_name);

    printf("Enter your customer ID: ");
    scanf("%d", &customer_id);

    printf("Enter the units consumed: ");
    scanf("%f", &unit_consumed);

    
    total_bill = calculate_total_bill(unit_consumed);

    
    printf("\nName is : %s\n", customer_name);
    printf("Customer ID is : %d\n", customer_id);
    printf("You have consumed: %.2f units\n", unit_consumed);
    printf("Total amount to pay: %.2f Ksh\n", total_bill);

    return 0;
}

