#include "ft_printf.h"

int	ft_putnbr_x_count(int n)
{
	int count;

	count = 0;

	if (n < 16)
		count += ft_putchar_count("0123456789abcdef"[n]);
	else
	{ 
		count += ft_putnbr_x_count(n / 16);
		count += ft_putnbr_x_count(n % 16);
	}
	return (count);
}

int	main()
{
	printf("\nreturn is %d\n",ft_putnbr_x_count(10));
}