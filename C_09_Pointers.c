//Pointers - 2004 C. S. Germany

//---------------------------------------------------------------------------------------------------------------------------

#include <stdio.h>

//---------------------------------------------------------------------------------------------------------------------------

void main(void)
 {
   int NumOne = 1;
   int NumTwo = 2;
 
   int * IAmAPointerToAnInteger;
 
   // Assign pointer to an address
   IAmAPointerToAnInteger = &NumOne;
 
   // Change the value pointed to by IAmAPointerToAnInteger to 5
   *IAmAPointerToAnInteger = 5;
 
   // Display the value
   printf("The value pointed to by IAmAPointerToAnInteger is %d . The variable NumOne is %d\n",
     *IAmAPointerToAnInteger, NumOne);
     
 }

//---------------------------------------------------------------------------------------------------------------------------

