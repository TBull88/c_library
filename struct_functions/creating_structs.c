#include <stdio.h>
#include <stdlib.h>

struct date {
        int month;
        int day;
        int year;
};

int main(void) {
     struct date today; // declare a var of type struct date   
     struct date date1 = {12, 10}; // sets date1.month = 12, date1.day = 10, no initial value given to year
     today.month = 9; // set the month to 9
     today.day = 25; // set the day to 25
     today.year = 2015; // set the year to 2015
     printf("Todays date is %d/%d/%d\n", today.month, today.day, today.year);

     int century = today.year / 100 + 1; // Perform arithmetic using dot notation
     printf("It is currently the %2d century\n", century);

     /* Using compund literal*/
     today = (struct date) {10, 30, 2011}; // changing the value of today using a compund literal
     printf("Todays date after change is %d/%d/%d\n", today.month, today.day, today.year);
}