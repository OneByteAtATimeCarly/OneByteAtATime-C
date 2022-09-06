// Currency Calculator 1.0 - 2004 C. S. Germany
// Flow Chart for this Project also in this repository

//---------------------------------------------------------------------------------------------------------------------------
 
#include <stdio.h> 
 
// This function encapsulates the error checking process.
// If we take input as a float or integer, when the user enters
// a character/string, it will throw the program into an infinite 
// loop and crash it.  If, on the other hand, we take input as 
// a string, we can parse the string for ASCII values that relate
// to numbers and then we can handle both kinds of input.
 
// The first part parses numbers to the left of the decimal,
// then the second part parses numbers to the right.
 
// If we get a non-number ASCII value, an error message is displayed
// and the the return value is set to 0.0.
 
//For the "Miracle C" Compiler, these had to be globally declared outside the function.

int x;
float THEamount = 0.0;
float factor;         //Factor for decimal places
 
//---------------------------------------------------------------------------------------------------------------------------
                       
float CheckErrors(char * amountString)
{
        x = 0;
        THEamount = 0.0;
        printf("String value passed is %s.", amountString);
            
        while( (amountString[x] - 48) < 10 && (amountString[x] - 48) > 0 )       
        {                      
                  //Multiply by 10 to move the decimal place to the left.
                  THEamount = 10 * THEamount + (amountString[x] - 48);
                   x++;   //proceed to next character in the array
        } 
 
        //If last character is a decimal point, we need to move numbers to
       //the right instead of the left.
 
       if(amountString[x] == '.') 
       {
                printf("\nI see a decimal point!\n"); 
                x++;             //Need to increment x to the next character FIRST
 
               factor = 1.0;    //factor needs to be reinitialized each time!
 
               while( (amountString[x] - 48) < 10 && (amountString[x] - 48) > 0 )
              {
                          factor = factor * 0.1;  //Decrease by factor of 10
                                                          //Add a decimal place to the right
                          THEamount = THEamount + (amountString[x] - 48) * factor;  
                          x++;
              }
 
              //If they type a non-number ASCII value after the decimal flag
              //it as an error and return 0.0 as the value.
               if(!(amountString[x] - 48) < 10 && (amountString[x] - 48) > 0)
              {  
                      printf("\n\nSorry, but that was not a whole number.\n");
                      printf("The number you have entered will be set to 0 (NULL).\n");
                      THEamount = 0.0;
                      return THEamount;
               }
 
          }  //close block that executes if char was a ‘.’
 
          else
          {
                   //If they type a non-number ASCII value before the decimal flag
                   //it as an error and return 0.0 as the value.
                   if(!(amountString[x] - 48) < 10 && (amountString[x] - 48) > 0)
                   {  
                        printf("\n\nSorry, but that was not a normal number!\n");
                        printf("The strange string you have entered will be set to 0 NULL.\n");
                        THEamount = 0.0;
                        return THEamount;
                   }
          }
 
           return THEamount;
      
} //close function
 
//---------------------------------------------------------------------------------------------------------------------------
 
void ConvertCurrency() 
{ 
      //Note: "to" = units to 1 US Dollar 
      //      "from" = 1 US Dollar to units 
 
     int selection = 100;
     float amount = 0.0, result = 0.0;
     char amt[10];
 
     //Variable for converting to and from the US dollar. Self explanatory.
     float EUROSto, RUBLESto, PESOSto, RUPEESto, YENto, POUNDSto; 
     float EUROSfrom, RUBLESfrom, PESOSfrom, RUPEESfrom, YENfrom, POUNDSfrom; 
 
     EUROSto = .8040;
     RUBLESto = 24.00884; 
     PESOSto = 11.4155; 
     RUPEESto = 45.9137; 
     YENto = 108.778; 
     POUNDSto = .5343; 
 
     EUROSfrom = 1.2438; 
     RUBLESfrom = .0344; 
     PESOSfrom = .0876; 
     RUPEESfrom = .0218; 
     YENfrom = .0092; 
     POUNDSfrom = 1.8715; 
 
     //Print a menu of conversion choices
     printf("\n\t**************** Main Menu ***************"); 
     printf("\n\t*                                        *"); 
     printf("\n\t*     Choose an option below:            *"); 
     printf("\n\t*                                        *"); 
     printf("\n\t*     1. US Dollars to EUROS.            *"); 
     printf("\n\t*     2. US Dollars to RUBLES.           *"); 
     printf("\n\t*     3. US Dollars to PESOS.            *"); 
     printf("\n\t*     4. US Dollars to RUPEES.           *"); 
     printf("\n\t*     5. US Dollars to YEN.              *"); 
     printf("\n\t*     6. US Dollars to POUNDS.           *"); 
     printf("\n\t*     7. EUROS to US Dollars.            *"); 
     printf("\n\t*     8. RUBLES to US Dollars.           *"); 
     printf("\n\t*     9. PESOS to US Dollars.            *"); 
     printf("\n\t*     10. RUPEES to US Dollars.          *"); 
     printf("\n\t*     11. YEN to US Dollars.             *"); 
     printf("\n\t*     12. POUNDS to US Dollars.          *"); 
     printf("\n\t*                                        *"); 
     printf("\n\t******************************************\n\n"); 
 
     scanf("%d", &selection); // Get their choice
 
     printf("\n\nNow enter the amount to convert (as whole or decimal value): "); 
     scanf("%s", amt);   // Take the input as a string (char array).
 
     amount = CheckErrors(amt); // Pass to error-checking function.
 
     printf("\n\nThe string converted to a float number is: %f .\n\n", amount);  
 
     //Perform the calculations based on user's choice.
     switch(selection) 
     { 
              case 1 : result = amount * EUROSto; 
                          printf("\n%f US dollars is %f EUROS.", amount, result); 
                          break; 
 
              case 2 : result = amount * RUBLESto; 
                          printf("\n%f US dollars is %f RUBLES.", amount, result); 
                          break; 
 
              case 3 : result = amount * PESOSto; 
                          printf("\n%f US dollars is %f PESOS.", amount, result); 
                          break; 
 
              case 4 : result = amount * RUPEESto; 
                          printf("\n%f US dollars is %f RUPEES.", amount, result); 
                          break; 
 
              case 5 : result = amount * YENto; 
                          printf("\n%f US dollars is %f YEN.", amount, result); 
                          break; 
 
              case 6 : result = amount * POUNDSto; 
                          printf("\n%f US dollars is %f POUNDS.", amount, result); 
                          break; 
 
              case 7 : result = amount * EUROSfrom; 
                          printf("\n%f EUROS is %f US dollars.", amount, result); 
                          break; 
 
              case 8 : result = amount * RUBLESfrom; 
                          printf("\n%f RUBLES is %f US dollars.", amount, result); 
                          break; 
 
              case 9 : result = amount * PESOSfrom; 
                          printf("\n%f PESOS is %f US dollars.", amount, result); 
                          break; 
 
              case 10 : result = amount * RUPEESfrom; 
                            printf("\n%f RUPEES is %f US dollars.", amount, result); 
                            break; 
 
              case 11 : result = amount * YENfrom; 
                            printf("\n%f YEN is %f US dollars.", amount, result); 
                            break; 
 
              case 12 : result = amount * POUNDSfrom; 
                            printf("\n%f POUNDS is %f US dollars.", amount, result); 
                            break; 
 
              default : printf("Invalid choice."); 
                           break; 
         
      } //close switch 
 
} //close function   
 
//---------------------------------------------------------------------------------------------------------------------------
 
void DisplayChart() 
{ 
       //Just display a simple chart with today's exchange rates.
       printf("\n\t**************** Currency Rates *************"); 
       printf("\n\t*                                           *"); 
       printf("\n\t*     1.  1 US Dollar = .8040 EUROS.        *"); 
       printf("\n\t*     2.  1 US Dollar = 24.00884 RUBLES.    *"); 
       printf("\n\t*     3.  1 US Dollar = 11.4155 PESOS.      *"); 
       printf("\n\t*     4.  1 US Dollar = 45.9137 RUPEES.     *"); 
       printf("\n\t*     5.  1 US Dollar = 108.778 YEN.        *"); 
       printf("\n\t*     6.  1 US Dollar = .5343 POUNDS.       *"); 
       printf("\n\t*                                           *"); 
       printf("\n\t*     7.  EUROS = 1.2438 US Dollars.        *"); 
       printf("\n\t*     8.  RUBLES = .0344 US Dollars.        *"); 
       printf("\n\t*     9.  PESOS = .0876 US Dollars.         *"); 
       printf("\n\t*     10. RUPEES = .0218 US Dollars.        *"); 
       printf("\n\t*     11. YEN to = .0092 Dollars.           *"); 
       printf("\n\t*     12. POUNDS = 1.8715 US Dollars.       *"); 
       printf("\n\t*                                           *"); 
       printf("\n\t*********************************************\n\n"); 
 
} 
 
//---------------------------------------------------------------------------------------------------------------------------
 
void main() 
{ 
     int RunProgram = 100; 
     char choice = ‘z’; 
 
     printf("\nCurrency Converter v. 3.0 - 2004 C. Germany - Team A Software!!"); 
 
     //Lock program into a loop so it will keep running until user selects quit.
     while(RunProgram != 0) 
     { 
                printf("\n\nMENU - Select an option\n\n"); 
                printf("\n\tQ = Quit"); 
                printf("\n\tC = Convert Curency"); 
                printf("\n\tD = Display Chart");  
                printf("\n\n\tEnter your choice: "); 
 
                scanf("%s", &choice); 
 
               //Main menu choices
                switch(tolower(choice)) 
                { 
 
                      case ‘q’  :  RunProgram = 0; 
                                       break; 
                      case ‘c’  :  ConvertCurrency(); //Call conversion menu
                                       break; 
                      case ‘d’  :  DisplayChart(); 
                                       break; 
                      default :    printf("Sorry, invalid choice."); 
                                       break; 
 
            } //close switch statement 
 
        } //close while true loop on choice 
 
         //User has chosen to quit - display exit message.
        printf("\nYou have choosen to quit.\nEnding calculator program. Exiting...\n\n"); 
 
} // close main 

//---------------------------------------------------------------------------------------------------------------------------

