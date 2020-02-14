#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "timelib.h"
//including new Library timelib.h, to be able to use time functions

/*
author : Michel Basenau
After the user enters an date, this program returns the
No. of the day, if the Date is correct.
When the program returns 0, then the Date was incorrect.
*/


int main()
{

//Declaring and Initializing needed Variables
        int dayOfYear;
        int year = 0;
        int month = 0;
        int day = 0;
//Scanning Date, split into day, month and year
        printf("Enter Year :");
        scanf("%i",&year);
        printf("Enter Month :");
        scanf("%i",&month);
        printf("Enter Day :");
        scanf("%i",&day);
//Calling DayofYear-Function of the Library timelib.h, which returns the No. of the Day, calculated with the parameters day, month and year
        dayOfYear = day_of_the_year(day, month, year);

        printf("No. of the Day :%i", dayOfYear);

        return 0;

}
