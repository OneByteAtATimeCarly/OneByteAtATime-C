// Number Guessing Game 1.0 - 2004 C.S. Germany

#include <stdio.h>

//--------------------------------------------------------------------------------------------------------

int RollEmBaby() 
{
    //Yeah, I know it's pseudo random, but good enough for our purposes ...
    int HighNumber;
    int LowNumber;
    int RandomResult;
    
    HighNumber = 12;
    LowNumber = 2;
    
    srand(time(NULL));
    RandomResult = (rand()%HighNumber) + LowNumber;
    return RandomResult;
} 
//--------------------------------------------------------------------------------------------------------

void main(void)
 {
      int ComputersNumber;
      int UsersChoice; 
      ComputersNumber = RollEmBaby();  
      printf("There are two ways to win, and both depend\n");
      printf("on whether or not lady luck shines.\n\n");
      printf("1. If you guess the number, you win.  For this,\n");
      printf("you have a snow ball\'s chance in Hell! :) \n\n");
      printf("2. At slightly better odds, your second chance\n");
      printf("is if you roll snake eyes or double sixes!\n\n");
      printf("Now that\'s a pretty fair deal, right?");    
      printf("\n\n What number do you guess? ");
      
      scanf("%d", &UsersChoice); 
      printf("\n\nThe number rolled was: %d .", ComputersNumber);
      if(UsersChoice == ComputersNumber) 
      {  
              printf("\n\nYou did it!  Unbelieveable luck!  You win!\n\n");
      }
     if(ComputersNumber == 2)
     {  printf("\n\nYou win!  Snake Eyes!  Yeah!");  }
 
   if(ComputersNumber >2 && ComputersNumber < 12)
   { 
        if(ComputersNumber != UsersChoice)
        {
           printf("\n\nSorry . . . You loose.\n\n");
        }
   }
   if(ComputersNumber == 12)
   {  printf("\n\nYou win!  Double sixes!!!"); }
 
 } // close main()
//Version 2.0
#include <stdio.h>
void Greet()
 {
   char TheirName[20];
   printf("Hi!  What\'s your name?\t");
   scanf("%s", TheirName);
   printf("\n\nHello, %s, I hope you are having a nice day!\n", TheirName);
 }
 
int LuckyNumber(int low, int high)
{
    int PlayerGuess;
    int Lucky;
    
    srand(time(NULL));
    Lucky = (rand()%low) + high;
    return Lucky;
}
 

void main(void)
 {
     int MagicNumber;
     int PlayerGuess;
     Greet();
     MagicNumber = LuckyNumber(1, 6);
     printf("\nWhat\'s your best guess? ");
     scanf("%i", &PlayerGuess);
     printf("\n\nReceived %d from player.\n\n");
	 if(PlayerGuess == MagicNumber)
	 {
	    printf("\n\nYou did it! You guessed my lucky number!\n\n");
	 }
	 else
	 {
	    printf("\n\nSorry, you did not guess it.\n\n");
	    printf("The number was %d", MagicNumber);
	 }
 }