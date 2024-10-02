#include <stdio.h>
#include <math.h>
int main ( ) {
    /*number is the number of times interest applied per time period
    periods is the number of time periods elapsed*/
  
    int principal,rate,number,periods;
    printf("Enter principal:\n");
    scanf("%d", &principal);
    printf("Enter rate:\n");
    scanf("%d",&rate);
    printf("Enter number:\n");
    scanf("%d",&number);
    printf("Enter periods:\n");
    scanf("%d", &periods);
    int Amount;
    Amount=principal*(1+rate/number)^number*periods;
    printf("%d",Amount);
    return 0;
    
	
}