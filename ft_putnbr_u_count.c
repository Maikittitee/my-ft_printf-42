#include "ft_printf.c"

int	ft_putnbr_u_count(unsigned int n)
{
    int count;

    count = 0;
	if (n <= 9)
		count += ft_putchar_count(n + '0');
	else
	{
		count += ft_putnbr_u_count(n / 10);
		count += ft_putnbr_u_count(n % 10);
	}
    return (count);
}
