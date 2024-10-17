#include <stdio.h>
int main( ) {
   int start,stop,sum = 0;
   
   printf("Enter Start:");
   scanf("%d", &start);
   printf("Enter Stop:");
   scanf("%d", &stop);
   
   for (start;start<=stop;start++) {
       printf("%d\n, Start:");
       sum=sum+start; 
   }
       printf("Sum %d:",sum);
       
       return 0;
       
   
	
}