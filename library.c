#include <stdio.h>
int main ( ) {
    int bookID,dueDate,returnDate;
    int daysOverdue;
    int fineRate;
    int fineAmount;
    //user input//
    printf("Enter Book ID:");
    scanf("%d",&bookID);
    printf ("Enter Due Date:");
    scanf("%d",&dueDate);
    printf("Enter Return Date:");
    scanf("%d",&returnDate);
    //To find days overdue//
    daysOverdue=returnDate-dueDate;
    if (daysOverdue<=0) {
        fineRate=0;
    }else if (daysOverdue<=7) {
        fineRate=20;
    }else if(daysOverdue<=14) {
        fineRate=50;
    }else {fineRate=100;
    }
    fineAmount=daysOverdue*fineRate;
    //display//
    printf("\nBook ID: %d\n",bookID);
    printf("Due date: %d\n",dueDate);
    printf("Return date: %d\n",returnDate);
    printf("Days Overdue: %d\n",daysOverdue);
    printf("Fine rate: %d\n",fineRate);
    printf("Fine Amount: %d\n",fineAmount);
    return 0;
    
   

	
}