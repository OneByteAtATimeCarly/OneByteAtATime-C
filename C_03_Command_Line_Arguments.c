// Using Command Line arguments in C++ - 2004 C. S. Germany

//---------------------------------------------------------------------------------------------------------------------------

#include <stdio.h>
#include <ctype.h>

//---------------------------------------------------------------------------------------------------------------------------

int main(int argc, char * argv[])
{
     //2004 - C. Germany. The string arguments passed to the command line are
     //actually multi-dimensional arrays, so we need nested for loops.
    
   char * tempstring;
   printf("I received %d arguments!\n", argc);
   for(int i=0; i<argc; i++)
   {
          printf("\nArgument %d:", i);
          tempstring = argv[i];
  printf("You typed: \"");
  printf(tempstring);
  printf("\". In capital letters that\'s \"");
  for(int z = 0; tempstring[z]; z++)
      putchar(toupper(tempstring[z]));
  printf("\".");
   }
    printf("\n\n");
    char * t1;
    t1 = "the end";
    for(int x=0; t1[x]; x++)
        putchar(toupper(t1[x]));
    printf("\n\n\n");
    return 0;
}

//---------------------------------------------------------------------------------------------------------------------------

