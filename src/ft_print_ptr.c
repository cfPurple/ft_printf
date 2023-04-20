#include "ft_printf.h"

int	ft_ptr_len(unsigned long long num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

void	ft_put_ptr(unsigned long long nb)
{
	int c;
	char str[] = "0123456789abcdef";

	if (nb == 0)
		return;
	c = nb % 16;
	ft_conv_base(nb / 16 , str);
	ft_putchar(str[c]);
}

int	ft_print_ptr(unsigned long long ptr)
{
	write(1, "0x", 2);

	if (ptr == 0)
	{
		write(1, "0", 1);
		return (3);
	}
	else
		ft_put_ptr(ptr);
	return (ft_ptr_len(ptr) + 2);
}