// program to calculate the fine of overdue library books
/*
Name: Benard kimani 
Reg:CT101/G/23293/24
*/
#include <stdio.h>
int main (){
int bookID, dueDate, returnDate, daysOverdue;

printf ("Enter BookID:");
scanf ("%d", &bookID);
printf ("Enter DueDate:");
scanf("%d", &dueDate);
printf ("Enter ReturnDate:");
scanf("%d", &returnDate);

float fineRate, fineAmount;

daysOverdue=returnDate-dueDate;

if(daysOverdue>=0, daysOverdue <=7)
{fineRate=20;}
else if ( daysOverdue>=8 , daysOverdue <=14)
{fineRate=50;}
else if ( daysOverdue >=15)
{fineRate=100;}
fineAmount= daysOverdue*fineRate ;
printf ("Book ID=%d\n",bookID);
printf ("Due Date=%d\n",dueDate);
printf ("Return Date=%d\n",returnDate);
printf("DaysOverdue=%d\n",daysOverdue);
printf ("FineRate=%.2f\n",fineRate);
printf ("Total fineAmount=%.2f\n",fineAmount);

return 0;

}