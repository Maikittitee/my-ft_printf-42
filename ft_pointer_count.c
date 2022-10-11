#include "ft_printf.h"

int	ft_pointer_count(unsigned long long n)
{
	int count;

	count = 0;
	count += ft_putstr_count("0x");
	count += ft_putnbr_x_count(n);
	return (count);
}
