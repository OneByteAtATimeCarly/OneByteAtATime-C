//How Many Lines 2 - 2004 C. S. Germany

//---------------------------------------------------------------------------------------------------------------------------

#include <stdio.h>

//---------------------------------------------------------------------------------------------------------------------------

void main()
 {
   int NumTimes;
   int x;
   int StopIt;
   StopIt = 0;  //false
   
   while(StopIt != 1)
   {
        printf("How many lines woud you like?  ");
        scanf("%d", &NumTimes);
        //NumTimes = 4;
        printf("Received the number %d .", NumTimes);
        printf("\n\n");
   
        switch(NumTimes)
        { 
          case 0 : printf("Too few lines to print!\n");
                   StopIt = 1;  //true
                   break; 
          case 1 : printf("A line!\n");
                   StopIt = 1;  //true
                   break; 
          case 2 : printf("A line!\nA line!\n");
                   StopIt = 1;  //true
                   break;           
          case 3 : printf("A line!\nA line!\nA line!\n");
                   StopIt = 1;  //true
                   break;   
          default : printf("That is not an option!\n"); 
                    break;      
        } // close switch
   
  } // close while true loop
   printf("\n\n");
   printf("The End");
   printf("\n \n");
 } // close main() function

//---------------------------------------------------------------------------------------------------------------------------

