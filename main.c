#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>




int is_leapyear(int year)
{
    if(year<0 || year<1582)
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

int get_days_for_month(int month, int year)
{
    int days[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if (month > 0 && month < 13)
    {
        if (is_leapyear(year) == 1)
        {
            int days[1] = {29};

        }
        return days[month-1];
    }
    else
    {
        return -1;
    }
}


int exist_date(int day, int month, int year){
    if (get_days_for_month(month,year)>0 && day <= get_days_for_month(month,year) && year > 2400 && year < 1582 )
    {
        return 1;
    }
    else
    {
        return 0;
    }

}


int day_of_the_year(int day, int month, int year){
    if (exist_date(day,month,year) == 1)
    {
        int i;
        int anzahlTage = 0;

        for(i=1; i<month; i++)
        {
            anzahlTage += get_days_for_month(i,year);
        }
    anzahlTage += day;
    return anzahlTage;

    }



}


int main()
{
        int dayOfYear = 0;
        int year = 0;
        int month = 0;
        int day = 0;
        printf("Eingabe Jahr :");
        scanf("%i",&year);
        printf("Eingabe Monat :");
        scanf("%i",&month);
        printf("Eingabe Tag :");
        scanf("%i",&day);
        dayOfYear = day_of_the_year(day,month,year);

        printf("Nr. des Tages:%i",dayOfYear);

        return 0;

}
