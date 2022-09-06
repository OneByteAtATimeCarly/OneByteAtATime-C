//How Many Lines 1 - 2004 C. S. Germany

//---------------------------------------------------------------------------------------------------------------------------

#include <stdio.h>

//---------------------------------------------------------------------------------------------------------------------------

void main(void)
 {
      int NumTimes;
      int x;
      printf("How many lines woud you like?  ");
      scanf("%d", &NumTimes);
      //NumTimes = 4;
      printf("Received the number %d .", NumTimes);
      printf("\n\n");
   
   if(NumTimes < 500 && NumTimes >0)
   {
       for(x = 0; x < NumTimes; x++)
       {
           printf("This is line number ");
           //Need to adjust the offset for the fencepost error 
           printf("%d", x+1);
           printf(".\n");
       }
   }
   else
   {
      if(NumTimes <= 0)
      { 
        printf("Printing 0 or less lines is pretty pointless.");
      }
      
      else
      {
           printf("More than 500?!? That is too many lines!  We don\'t have all day!");
      }
   }
   printf ("\n\n");
   printf ("The End");
   printf ("\n\n");
 } // close main()

//---------------------------------------------------------------------------------------------------------------------------

