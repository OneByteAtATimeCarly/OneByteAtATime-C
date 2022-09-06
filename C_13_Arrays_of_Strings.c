//Arrays of Strings - 2004 C. S. Germany

//---------------------------------------------------------------------------------------------------------------------------

#include <stdio.h>
char * GetName()
{
     char pName[20]; 
     printf("Please tell me your name: "); 
     scanf("%s", pName); 
     printf("Received the string: ");
     printf(pName);
     printf(" while inside the GetName function.");
     printf("\nNow exiting the GetName() function.");
     return pName;
}

//---------------------------------------------------------------------------------------------------------------------------
 
void main(void)  
{  
   int x;
   char * Messages[3] = {"C++ ", "is very close ", "to C.\n\n"};
   char * TheName; 
   
   TheName = GetName();
   
   printf("\n\n");
   printf(TheName);
   printf(" , the 3 messages are: ");
   
   for(x = 0; x <3; x++)
   {
      printf(Messages[x]);
   }
   
   printf("\n\nThe End");
   
 }

//---------------------------------------------------------------------------------------------------------------------------

