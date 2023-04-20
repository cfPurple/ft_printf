/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfelix <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 21:51:52 by cfelix            #+#    #+#             */
/*   Updated: 2023/04/20 21:51:59 by cfelix           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <limits.h>

int		ft_formats(va_list *args, const char format);
int		ft_printf(const char *str, ...);
int		ft_print_char(char c);
int		ft_print_str(char *str);
void	ft_putstr(char *str);
int		ft_print_percent(void);
void	ft_putchar(char c);
void	ft_conv_hex(unsigned int nb, char *str);
int		ft_hex_len(unsigned int num);
int		ft_print_hex(unsigned int num, char format);
void	ft_put_nbr(int n);
int		ft_print_nbr(int num);
void	ft_put_unsigned(unsigned int n);
int		ft_unsigned_len(unsigned int n);
int		ft_print_unsigned(unsigned int n);
void	ft_put_ptr(size_t nb, char *str);
int		ft_ptr_len(size_t num);
int		ft_print_ptr(size_t ptr);

#endif
