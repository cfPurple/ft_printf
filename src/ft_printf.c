#include "ft_printf.h"

int	ft_formats(va_list *args, char format)
{
	int	len;

	len = 0;
	if (format == 'c')
		len += ft_print_char(va_arg(*args, int));
	else if (format == 's')
	{ 
		str = va_arg(*args, char*);
		if (str == NULL)
			len += ft_print_str("(null)");
		else
		len += ft_print_str(str);
	}
	else if (format == 'p')
		len += ft_print_ptr(va_arg(*args, unsigned long long));
	else if (format == 'd' || format == 'i')
		len += ft_print_nbr(va_arg(*args, int));
	else if (format == 'u')
		len += ft_print_unsigned(va_arg(*args, unsigned int));
	else if (format == 'x' || format == 'X')
		len += ft_print_hex(va_arg(*args, int), format);
	else if (format == '%')
		len += ft_print_percent();
	return (len);
}

int    ft_printf(const char *str, ...)
{
	va_list	args;
	int length;
	int i;

	length = 0;
	i = 0;
	va_start(args, str);
	//print_va_list(args);
	while (str[i])
	{
		if (str[i] == '%')
		{
			length += ft_formats(&args,str[i + 1]);
			i++;
		}
		else
		{
			ft_putchar(str[i]);
			length++;
		}
		i++;
	}
	va_end(args);
	return (length);
}

int main()
{

//printf("\n%d\n",ft_printf(" %x ", INT_MIN));
//ft_printf(" %d \n", 0);
//printf("\n%d\n",printf(" %x ", INT_MIN));
//printf(" %d \n", 0);
//	ft_printf(" %c %c %c %c %c %c ", '0', '8', '0', '5', '6', '7');
	//ft_printf(" %p %p ", LONG_MIN, LONG_MAX);
	//printf(" %p %p ", LONG_MIN, LONG_MAX);
	//printf(" %p %p ", -ULONG_MAX, ULONG_MAX);
	//printf(" NULL %s NULL ", NULL);
	ft_printf(" NULL %s NULL ", NULL);
	//printf(" %p %p ", INT_MIN, INT_MAX);
	//ft_printf(" %p %p ", ULONG_MAX, -ULONG_MAX);
	//printf(" %p %p ", ULONG_MAX, -ULONG_MAX);
//	return 1;
}
