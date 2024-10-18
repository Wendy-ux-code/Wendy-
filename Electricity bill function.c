//CT101/G/23798/24//

#include <stdio.h>
void calculateBill(int customerID,char customerName,int unitsConsumed) { float chargeperUnit,totalBill, surcharge;

//to get charge per unit based on consumed units//
     if (unitsConsumed <= 199) {chargeperUnit = 1.20;
     }else if(unitsConsumed >= 200 && unitsConsumed < 400)  {chargeperUnit = 1.50;
     }else if(unitsConsumed >=400 && unitsConsumed < 600) {chargeperUnit = 1.80;
     }else {chargeperUnit = 2.00;
     }
     
     totalBill = unitsConsumed*chargeperUnit;
     if (totalBill > 400) {
         surcharge = totalBill*0.15;
         
     }
     if (totalBill < 100) {
         totalBill = 100;
     }
     //display output//
     printf("Electricity Bill:\n");
     printf("Customer ID:%d\n",customerID);
     printf("Customer Name:%c\n",customerName);
     printf("Units Consumed:%d\n",unitsConsumed);
     printf("Charges per Unit:%.2f\n",chargeperUnit);
     printf("Total Amount:%.2f\n",totalBill);
     }
     int main ( ) {
         int customerID;
         char customerName;
         int unitsConsumed;
         
         //promt user to enter data//
         printf("Enter Customer ID:\n");
         scanf("%d",&customerID);
         printf("Enter Customer Name:\n");
         scanf("%c",&customerName);
         printf("Enter Units Consumed:\n");
         scanf("%d",&unitsConsumed);
         
         
         calculateBill(customerID,customerName,unitsConsumed);//function calling//
         return 0;
     }
         
         

          

	
