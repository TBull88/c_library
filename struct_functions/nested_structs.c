#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct time {
        int hours;
        int minutes;
        int seconds;
};

struct date_and_time {
        struct date sdate;
        struct date stime;
};

int main(void) {
        struct date_and_time event;
}