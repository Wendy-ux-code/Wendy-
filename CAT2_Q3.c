//Wendygrace Wairimu//
//CT101/G/23798/24//

#include <stdio.h>
 
 int main ( ) {
     
     float hoursWorked;
     float hourlyWage;
     float grossPay;
     float tax;
     float netPay;
     float overtimeHours;
     float regularHours;
     const float taxRate1= 0.15, taxRate2 = 0.20;
     const float taxLimit = 600;
     const float overtimeRate = 1.5;
     const float overtimeThreshold = 40;
     
     printf("Enter hours worked:");
     scanf("%f",hoursWorked);
     printf("Enter hourly wage:");
     scanf("%f",hourlyWage);
     
     if (hoursWorked>overtimeThreshold) {
     regularHours = overtimeThreshold;
     
     overtimeHours = hoursWorked - overtimeThreshold;
     } else { 
     regularHours = hoursWorked;
     overtimeHours = 0;
     }
     
     grossPay = (regularHours*hourlyWage)+(overtimeHours*hourlyWage*overtimeRate);
     
     if (grossPay <= taxLimit) {
         tax= grossPay*taxRate1;
     } else {
         tax= taxLimit*taxRate1 + (grossPay-taxLimit)*taxRate2; }
         
         netPay = grossPay-tax;
         
         printf("Gross pay:$%.2f\n",grossPay);
         printf("Taxes:$%.2f\n",tax);
         printf("Net pay:$%.2f\n",netPay);

	return 0;
}