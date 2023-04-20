#include "ft_printf.h"

void	ft_put_unsigned(unsigned int n)
{
	long long	div;

	if (n == 0)
	{
		ft_putchar('0');
		return ;
	}
	div = 1;
	while (div <= n)
		div = div * 10;
	while (div >= 10)
	{
		div = div / 10;
		ft_putchar((n / div) + '0');
		n = n % div;
	}
}

int ft_unsigned_len(unsigned int n)
{
	int len;

	len = 0;
	while(n > 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

int	ft_print_unsigned(unsigned int n)
{
	ft_put_unsigned(n);
	if (n == 0)
		return (1);
	return (ft_unsigned_len(n));
}