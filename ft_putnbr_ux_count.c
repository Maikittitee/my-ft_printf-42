#include "ft_printf.h"

int	ft_putnbr_ux_count(unsigned int n)
{
	int count;

	count = 0;

	if (n < 16)
		count += ft_putchar_count("0123456789ABCDEF"[n]);
	else
	{ 
		count += ft_putnbr_ux_count(n / 16);
		count += ft_putnbr_ux_count(n % 16);
	}
	return (count);
}
