#ifndef TIMELIB_H_INCLUDED
#define TIMELIB_H_INCLUDED

struct date {
    int day;
    int month;
    int year;
    };

int is_leapyear(int year);
int get_days_for_month(struct date enteredDate);
int day_of_the_year(struct date enteredDate);
int exist_date(struct date enteredDate);
struct date input_date();

#endif // TIMELIB_H_INCLUDED
