//Convert Temperatures - 2004 C. S. Germany

//-------------------------------------------------------------------------------------------------------------------------------

#include <stdio.h>

//-------------------------------------------------------------------------------------------------------------------------------

void ConvertTemp()
{
     int selection;
     float temperature, result;
    

     printf("\nChoose:");    
     printf("\n1 = Convert Farenheit to Celcius.");    
     printf("\n2 = Convert Celcius to Farenheit.");
    

     printf("\n\nYour choice: ");     
     scanf("%d", &selection);

     printf("\n\nNow enter the temperature to convert: ");
     scanf("%f", &temperature);

         switch(selection)
         {
            //Convert Farenheit to Celcius
            case 1 : result = ( (temperature - 32) * 5 ) / 9;
                     printf("\n %f degrees farenheit is %f degrees celcius.", temperature, result);
                     break;
                    

            //Convert Celcius to Farenheit
            case 2 : result = (temperature * 9 / 5) + 32;
                     printf("\n %f degrees celcius is %f degrees farenheit.", temperature, result);
                     break;
                    

            default : printf("Invalid choice.");
                      break;
                     

         } //close switch

} //close function  

//-------------------------------------------------------------------------------------------------------------------------------

void main()
{
     int RunProgram = 100;
     int choice = 100;

     printf("\nTempertature Converter - 2004 C. Germany - Team A Software!!");

     while(RunProgram != 0)
     {
            printf("\n\nMENU - Select an option\n\n");
            printf("\n0 = Quit");
            printf("\n1 = Convert Temperature");
;
            printf("\n\nEnter your choice: ");

            scanf("%d", &choice);

            switch(choice)
            {

                   case 0 : RunProgram = 0;
                            break;
                           

                   case 1 : ConvertTemp();
                            break;
                                

                   default : printf("Sorry, invalid choice.");
                             break;

            } //close switch statement

        } //close while true loop on choice

        printf("\nYou have choosen to quit.\nEnding temperature conversion program.  Exiting...\n\n");

} // close main

//-------------------------------------------------------------------------------------------------------------------------------

