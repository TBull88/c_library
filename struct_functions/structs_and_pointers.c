#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct date {
        int month;
        int day;
        int year;
};

struct int_ptrs {
        int *p1;
        int *p2;
};

struct name_cnt {
        char *first; // using ptrs instead of arrays
        char *last;
        int letters;
};

int main(void) {
        struct date today; // declare a var of type struct date   
        struct date *date_ptr; //define a var to be a ptr to struct
        date_ptr = &today; // set ptr to point to adress of today
        
        date_ptr -> month = 9; // set the month to 9
        date_ptr -> day = 25; // set the day to 25
        date_ptr -> year = 2015; // set the year to 2015
        printf("Todays Date is %d/%d/%d\n", date_ptr->month, date_ptr->day, date_ptr->year);
        
        (*date_ptr).day = 21; // chnge the day member of today to 21
        
        /* Another method to change the day mamber of today to 21
               - date_ptr -> day = 21    
        */

        struct int_ptrs pointers; // define a var of type struct int_ptrs
       
       /*Pointers itsels is not a pointer, but a struct var that has two ptrs
         as its members. Use . notation to access p1 and p2*/

        int i1 = 100;
        int i2;

        pointers.p1 = &i1;
        pointers.p2 = &i2;
        *pointers.p2 = -97;

        printf("i1 = %d, *pointers.p1 = %d\n", i1, *pointers.p1);
        printf("i2 = %d, *pointers.p2 = %d\n", i2, *pointers.p2);
        

        /* Anytime you use pointers to arrays you have to use malloc
        The pointers in pnames should be used only to manage strings that were 
        created and allocated elsewhere in the program*/
        


}