#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "timelib.h"






int main()
{
        int dayOfYear;
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
