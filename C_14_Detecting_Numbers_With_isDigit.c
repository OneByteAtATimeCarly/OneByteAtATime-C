//Detecting Numbers with isdigit() - 2004 C. S. Germany

//---------------------------------------------------------------------------------------------------------------------------

#include <stdio.h>
#include <cctype.h>

//---------------------------------------------------------------------------------------------------------------------------

void main(void)
{
   char FavNumber[10];
   int Num, x;
   int a, b, c;
   x = 0;
   printf("Enter your three favorite numbers: ");
   //scanf("%d%d%d", &a, &b, &c);
   scanf("%s", FavNumber);
   printf("Your three favorite numbers as string values are: %s \n\n", FavNumber);
//Need to convert the ASCII value character array to integer values   
while(isdigit(FavNumber[x]))       
{
     if(!isdigit(FavNumber[x]))
     {
        printf("\n\nHey!  That's not a number! Invalid.\n\n");
        break;
     } //close if
     else
     {
        Num = 10 * Num + (FavNumber[x] - 48);
        x++;
     } //close else   
     
} //close while true loop
   
 
   printf("Your favorite numbers as integers are: %d \n", Num);
}

//---------------------------------------------------------------------------------------------------------------------------


