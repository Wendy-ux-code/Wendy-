
//Wendygrace Wairimu//
//CT101/G/23798/24//

#include <stdio.h>
 
 struct employee {
     char name[25];
     int id;
     char department[20];
     float salary;
     char email[50];
 };
 
 
     int main ( ) {
         struct employee details {
             "John Doe",
             12345,
             "Human resources",
              55000.50,
             "john.doe@company.com",
         };
         
         
         printf ("Name: %s\n",details.name);
         printf("ID: %d\n",details.id);
         printf("Department: %s\n",details.department);
         printf("Salary:%.2f\n",details.salary);
         printf("Email: %s\n",details.email);
         
         
         return 0;
	
}