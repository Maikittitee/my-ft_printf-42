#include "ft_printf.h"

int	ft_putnbr_o_count(int n)
{
	int count;
	int oct;
	int i;

	i = 1;
	oct = 0;

	count = 0;
	while (n)
	{
		oct += (n % 8) * i;
		n /= 8;
		i *= 10;
	}
	count += ft_putnbr_d_count(oct);
	return (count);
}

int	main()
{
	printf("\nreturn is %d\n",ft_putnbr_o_count(10));
}