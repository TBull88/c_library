#include <stdio.h>
#include <string.h>

int main(void)
{
        char multiple[] = "a string";
        char *p = multiple;

        for(int i = 0; i < strlen(multiple); i++)
        printf("multiple[%d] = %c\n*(p+%d) = %c\n&multiple[%d] = %p\np+%d = %p\n\n", 
                i, multiple[i], i, *(p+i), i, &multiple[i], i, p+i);
        
        return 0;
}