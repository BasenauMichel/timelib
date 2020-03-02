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
    struct date date1;
//Calling InputYear Function to read and check a year, entered by the user
    date1 = input_date();
//Calling DayofYear-Function of the Library timelib.h, which returns the No. of the Day, calculated with the parameters day, month and year
    dayOfYear = day_of_the_year(date1);

    printf("No. of the Day :%i", dayOfYear);

    return 0;

}
