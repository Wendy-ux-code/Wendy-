#include <stdio.h>

int main () {
    int customerID;
    char customerName;
    int unitsConsumed;
    float chargeperUnit, totalBill,surcharge;
    //prompt user to enter data//
    printf("Enter Customer ID:\n");
    scanf("%d", &customerID);
    printf("Enter Customer name:\n");
    scanf("%c", &customerName);
    printf("Enter Units Consumed:\n");
    scanf("%d", &unitsConsumed);
    //Using if else statement to check the given conditions//
    if (unitsConsumed <= 199) {
        chargeperUnit = 1.20;
    } else if (unitsConsumed >= 200 && unitsConsumed <400 ) {
        chargeperUnit = 1.50;
    } else if (unitsConsumed >= 400 && unitsConsumed < 600) {
        chargeperUnit = 1.80;
    } else {
     chargeperUnit = 2.00;
    }
    //To calculate the total bill//
    totalBill = unitsConsumed * chargeperUnit;
    
    if(totalBill > 400) {
        surcharge = totalBill * 0.15;
    }
    if (totalBill < 100) {
     totalBill = 100;
    }
   // Display output//
   printf("Electricity bill:\n");
   printf("Customer ID: %d\n", customerID);
   printf("Customer Name: %c\n",customerName);
   printf("Units Consumed: %d\n",unitsConsumed);
   printf("Charges per Unit: %.2f\n", chargeperUnit);
   printf("Total Amount: %.2f\n", totalBill);
     
     
        
    
    

	return 0;
}