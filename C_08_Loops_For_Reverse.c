//Reversing For loops - 2004 C. S. Germany

//---------------------------------------------------------------------------------------------------------------------------

#include <stdio.h>

//---------------------------------------------------------------------------------------------------------------------------

void main(void)
 {
   int counter;
 
   for (counter = 1; counter <= 5; counter++)
    printf("%d ", counter);
 
   printf("\nStarting second loop\n");
   
   for (counter = 1; counter <= 10; counter++)
    printf("%d ", counter);
 
   printf("\nStarting third loop\n");
 
   for (counter = 0; counter <= 5; counter++)
    printf("%d ", counter);
 }

//---------------------------------------------------------------------------------------------------------------------------

