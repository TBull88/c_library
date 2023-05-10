#include <stdio.h>

void copy_string(char *to, char *from)
{
        while(*from) //the null character is equal to the value 0, so will jump out then
                *to++ = *from++;
        
        *to = '\0';
}

int main(void)
{
        char string1[] = "A string to be copied.";
        char string2[50];

        copy_string(string2, string1);
        printf("string1 = %s\n", string1);
        printf("string2 = %s\n", string2);
}