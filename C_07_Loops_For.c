
//For loops - 2004 C. S. Germany

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
   for (counter = 0; counter <= 26; counter++)
    printf("%c", Alphabet[counter]);
 
   printf("\n\n");
   //Alphabet backwards
   printf("\n\nHere\'s the phonetic alphabet backwards:\n\n ");
   for (counter = 26; counter >= 0; counter--)
    printf("%c", Alphabet[counter]);
 }

//---------------------------------------------------------------------------------------------------------------------------

