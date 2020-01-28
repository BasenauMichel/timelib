#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isSchaltjahr( int jahr)
{
    if(jahr%4==0)
    {
        if(jahr%100==0)
        {
            if(jahr%400==0)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else
        {
            return true;
        }

    }
    else
    {
        return false;
    }
}



int main()
{
    int jahr = 0;
    int monat = 0;
    int tag = 0;
    int i = 0;
    int anzahlTage = 0;
    int tage[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    bool daysChanged = false;
    while(1)
    {
        printf("Eingabe Jahr :");
        scanf("%i",&jahr);
        printf("Eingabe Monat :");
        scanf("%i",&monat);
        printf("Eingabe Tag :");
        scanf("%i",&tag);

        if (isSchaltjahr(jahr) && daysChanged == false)
        {
            daysChanged = true;
            tage[1] +=1;
        }

        if ( (monat<1 || monat>12)&& (tag < 0 || tag > tage[monat-1]))
        {
            printf("Monat nicht gueltig\n");
            continue;
        }

        break;
    }
    for(i=1; i<monat; i++)
    {
        anzahlTage += tage[i-1];
    }
    anzahlTage += tag;
    printf("%i",anzahlTage);
    return 0;
}
