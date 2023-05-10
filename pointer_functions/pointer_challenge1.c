#include <stdio.h>

int main(void)
{
        int a_num = 10;
        int *pa_num = NULL;

        pa_num = &a_num;

        printf("Address of a_num: %p\n", &a_num);
        printf("Address of pointer: %p\n", &pa_num);
        printf("Value of pointer: %p\n", pa_num);
        printf("The value of a_num: %d\n", *pa_num);
}