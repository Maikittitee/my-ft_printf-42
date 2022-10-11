#include "ft_printf.h"

int	ft_putnbr_ux_count(int n)
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
/*
int	main()
{
	printf("\nreturn is %d\n",ft_putnbr_x_count(10));
}*/