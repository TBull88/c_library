void copy_string(char to[], char from[]) //using array parameter
{
        int i;

        for(i = 0; from[i] != '\0'; i++)
                to[i] = from[i];
        
        to[i] = '\0';
}

void copy_string(char *to, char *from)
{
        for(; *from != '\0'; from++, to++)
                *to = *from;
        *to = '\0';
}