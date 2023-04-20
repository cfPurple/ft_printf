#include "ft_printf.h"

int	ft_print_char(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_print_str(char *str)
{
	int	i;

	i = 0;
		while (str[i])
		{
			write(1, &str[i], 1);
			i++;
		}
	return (i);
}


void	ft_putstr(char *str)
{
	while (str[0])
	{
		write(1, &str[0], 1);
		(*str)++;
	}
}

int	ft_print_percent(void)
{
	write(1, "%", 1);
	return (1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
