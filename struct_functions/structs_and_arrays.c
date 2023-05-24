#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct date {
        int month;
        int day;
        int year;
};

int main(void) {
        // defines an array which consists of 10 elements
        // each element inside the array is defined to be of type struct data
        struct date my_dates[10];
        // To set SECOND date inside the my_dates array to August 8, 1986
        my_dates[1].month = 8;
        my_dates[1].day = 8;
        my_dates[1].year = 1986; 

        // setting the first three dates in the array  
        struct date more_dates[5] = {{12, 10, 1975}, {12, 30, 1980}, {11, 15, 2005}};
        // sets the THIRD date to 12/10/1975
        struct date more_dates[5] = {[2] = {12, 10, 1975}};
}