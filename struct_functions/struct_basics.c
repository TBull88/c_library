/*Strucs functions and helpful tips*/

#include <stdio.h>
#include <stdlib.h>

struct date {
        int month;
        int day;
        int year;
};

int main(void) {
        struct date todays_date; // declare a var to be of type struct date
        struct date *date_ptr; //  define a var to be a ptr to struct date
        date_ptr = &todays_date; // set it to point to todays_date w/assignment statement
        (*date_ptr).day = 21; // indorectly access any of the members of the date struct pointed to by pointer

        /* Above has the effect of setting the day of date struct pointed to by date_ptr to 21
                - parens are required because the struct member operator (.) has higher precedence
                  than the indirection operator (*) */


}