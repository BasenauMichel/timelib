#ifndef TIMELIB_H_INCLUDED
#define TIMELIB_H_INCLUDED

int is_leapyear(int year);
int get_days_for_month(int month, int year);
int day_of_the_year(int day, int month, int year);
int exist_date(int day, int month, int year);
void input_date(int *dayPointer, int *monthPointer, int *yearPointer);

#endif // TIMELIB_H_INCLUDED
