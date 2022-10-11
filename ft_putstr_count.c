#include "ft_printf.h"

int ft_putstr_count(const char *str)
{
    int count;

    count = 0;
    if (!str)
    {
        count += ft_putstr_count("(null)");
        return (count);
    }
    while (*str)
    {
        count += ft_putchar_count(*str);
        str++;
    }
    return (count);
}