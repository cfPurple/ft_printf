# include <stdarg.h>
# include <unistd.h>

#define NULL  __DARWIN_NULL
#define __DARWIN_NULL ((void *)0)

int ft_formats(va_list *args, const char format);
int ft_printf(const char *str, ...);
int	ft_print_char(char c);
int	ft_print_str(char *str);
void	ft_putstr(char *str);
int	ft_print_percent(void);
void	ft_putchar(char c);
void ft_conv_base(int nb ,char *str);
int	ft_hex_len(unsigned	int num);
int	ft_print_hex(unsigned int num, char format);
void	ft_put_nbr(int n);
int	ft_print_nbr(int num);
void	ft_put_unsigned(unsigned int n);
int ft_unsigned_len(unsigned int n);
int	ft_print_unsigned(unsigned int n);
void	ft_put_ptr(unsigned long long num);
int	ft_ptr_len(unsigned long long num);
int	ft_print_ptr(unsigned long long ptr);