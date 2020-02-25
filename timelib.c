//This functions parameter is a value of the type integer, which should be a year.
//This function returns an integer. A -1 if the year is incorrect, a 0 if the year is not a leap year and a 1 if it is a leap year.

int is_leapyear(int year)
{
    if(year<1582 || year>2400)
    {
        return -1;
    }

    if(year%4==0)
    {
        if(year%100==0)
        {
            if(year%400==0)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        else
        {
            return 1;
        }
    }
    else
    {
        return 0;
    }
}

/*This function has 2 parameter of the type integer and returns an integer.
/This function checks the month and returns a -1, if the month is incorrect.
/Then it declares an array, with 12 values standing for days of the months in chronological order.
/After testing if the entered year is a leap year, by calling another function, it changes the February, if its a leap year.
/This function returns the amount of days, of the entered month.
*/
int get_days_for_month(int month, int year)
{
    if (month < 1 || month > 12)
    {
        return -1;
    }
    else
    {
        if (is_leapyear(year) == 1)
        {
            int days[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
            return days[month-1];
        }
        else
        {
            int days[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
            return days[month-1];
        }
    }
}

//This function has 3 parameters of the type integer, which form a date and returns an integer.
//When the entered date does not exist, the function returns a 0. Else it returns a 1.
int exist_date(int day, int month, int year)
{
    if (day <= 0 || day > get_days_for_month(month,year) || year > 2400 || year < 1582 )
    {
        return 0;
    }
    else
    {
        return 1;
    }
}


//This function has 3 parameters of the type integer, which form a date and returns a variable of the type integer.
//The Variable returned by this function, contains the total amount of days, that have passed since the entered date
int day_of_the_year(int day, int month, int year)
{
    if (exist_date(day,month,year) == 1)
    {
        int i;
        int TotalAmountDays = 0;

        for(i=1; i<month; i++)
        {
            TotalAmountDays += get_days_for_month(i,year);
        }
        TotalAmountDays += day;
        return TotalAmountDays;

    }
}
//This function has no return value
//The 3 parameters form a day, split into day, month and year.
//They are pointer, so they are able to change other variables which are given to the function as a reference
//This function reads dates until a date is entered correct
void input_date(int *dayPointer, int *monthPointer, int *yearPointer){
    do{
    printf("Day:");
    scanf("%i", &*dayPointer);
    printf("Month:");
    scanf("%i", &*monthPointer);
    printf("Year:");
    scanf("%i", &*yearPointer);
    }while(exist_date(*dayPointer, *monthPointer, *yearPointer) == 0);

}



