#include <stdio.h>
int main ( ) {
    float income;
    int age;
    //ask user for age//
    printf("Enter your age:");
    scanf("%d",&age);
    //ask user for annual income//
    printf("Enter your income:");
    scanf("%f",&income);
    if(age>= 22 & income>=21000) {
       printf("Congratulations you qualify for a loan.");
    }
    else {
       printf("Unfortunately, we are unable to offer you a loan at this time");
    }
       
         
     return 0;
	
}