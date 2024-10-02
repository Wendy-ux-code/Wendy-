#include <stdio.h>
#include <math.h>
int main ( ) {
        int principal_amount,time,rate;
        printf("\nEnter the principal amount:\n");
        scanf("%d",&principal_amount);
        printf("Enter time:\n");
        scanf("%d",time);
        printf("Enter rate:\n");
        scanf("%d",rate);
        int simple_interest;
        simple_interest=(principal_amount*time*rate)/100;
        printf("Simple interest is %d",simple_interest);
        
       
        return 0;

}