// While True Loops - 2004 C. S. Germany

//---------------------------------------------------------------------------------------------------------------------------
 
#include <stdio.h>

//---------------------------------------------------------------------------------------------------------------------------
 
void main(void)
 {
   int counter;
   char Alphabet[27] = "abcdefghijklmnopqrstuvwxyz";
 
   //Alphabet forwards
   printf("This is for my son Jacob who can now get to A-B-C-D-E!\n\n");
   printf("Here\'s the phonetic alphabet forwards, Jacob:\n\n ");
   
   counter = 0;
   
   while(counter <= 26)
   {
    printf("%c", Alphabet[counter]);
    counter++;
   }
   
   printf("\n\n");
   //Alphabet backwards
   printf("\n\nHere\'s the phonetic alphabet backwards:\n\n ");
   
   counter = 26;
   
   while(counter >= 0)
   {
    printf("%c", Alphabet[counter]);
    counter--;
   }
   
 }

//---------------------------------------------------------------------------------------------------------------------------

