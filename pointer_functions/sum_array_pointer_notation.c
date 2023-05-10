#include <stdio.h>

int array_sum(int *ptr, const int n)
{
        int sum = 0;
        int * const array_end = ptr + n;

        for (; ptr < array_end; ptr++)
                sum += *ptr;
        
        return sum;
}

void main(void)
{
        int values[10] = {3, 7, -9, 3, 6, -1, 7, 9, 1, -5};
        printf("The sum is %d\n", array_sum(values, 10));
}
