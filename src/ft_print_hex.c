#include "ft_printf.h"

void ft_conv_base(int nb ,char *str)
{
	int c;

	if (nb == 0)
		return;
	c = nb % 16;
	ft_conv_base(nb / 16 , str);
	ft_putchar(str[c]);
}

int	ft_hex_len(unsigned	int num)
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

void	ft_find_format(unsigned int num, char format)
{

	if (format == 'x')
		ft_conv_base(num, "0123456789abcdef");
	if (format == 'X')
		ft_conv_base(num, "0123456789ABCDEF");
}

int	ft_print_hex(unsigned int num, char format)
{
	if (num == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	else
		ft_find_format(num, format);
	return (ft_hex_len(num));
}