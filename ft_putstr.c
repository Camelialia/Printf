#include "printf.h"

int    ft_putstr(char *s)
{
    int i;
    int count;

    i = 0;
    count = 0;
    while(s[i])
    {
        count += ft_putchar(s[i]);
        i++;
    }
    return(count);
}