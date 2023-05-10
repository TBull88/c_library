#include <stdio.h>

int main(void)
{
        long multiple[] = {15, 25, 35, 45};
        long *p = multiple;
        int size = sizeof(multiple)/sizeof(long);

        for(int i = 0; i < size; i++)
                printf("address p + %d: (&multiple[%d]): %llu\n*(p+%d) value:%ld\n\n",
                        i, i, (unsigned long long)(p + i), i, *(p + i));
        printf("\nType long occupies: %d bytes\n", (int)sizeof(long));

        return 0;

}