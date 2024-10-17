#include <stdio.h>
 int main( ) {
     int start,stop,sum=0;
     
     printf("Enter start:");
     scanf("%d",&start);
     printf("Enter to stop:");
     scanf("%d" ,&stop);
     
     do{
         printf("%d\n", start);
         sum=sum+start;
         sum+=start;
         start++;
     }
     while (start,start<=stop);
     printf("Sum %d", sum);
     
     return 0;
     

	
}