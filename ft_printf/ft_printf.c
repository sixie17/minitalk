/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 12:05:35 by ysakine           #+#    #+#             */
/*   Updated: 2021/11/25 12:05:38 by ysakine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_put_1(char c, unsigned long long n, int *len)
{
	if (c == 'p')
	{
		ft_putstr_fd("0x", 1, len);
		ft_putnbr_hex(n, len);
	}
	else if (c == 'x')
		ft_putnbr_hex((unsigned int)n, len);
	else if (c == 'X')
		ft_putnbr_hex_upper((unsigned int)n, len);
	else if (c == 'u')
		ft_putuint((unsigned int)n, len);
}

static void	ft_put_2(char c, int n, int *len)
{
	if (c == 'd' || c == 'i')
		ft_putnbr_fd(n, 1, len);
	else
		ft_putchar_fd(n, 1, len);
}

static int	ft_detect(char c, va_list ap, int *len)
{
	if (c == 'c' || c == 'd' || c == 'i')
	{
		ft_put_2(c, va_arg(ap, int), len);
		return (1);
	}
	if (c == 's')
	{
		ft_putstr_fd(va_arg(ap, char *), 1, len);
		return (1);
	}
	if (c == 'p' || c == 'x' || c == 'X' || c == 'u')
	{
		ft_put_1(c, va_arg(ap, unsigned long long), len);
		return (1);
	}
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	size_t	i;
	int		len;

	va_start(ap, format);
	len = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] == '%')
		{
			ft_putchar_fd('%', 1, &len);
			i += 2;
		}
		else if (format[i] == '%' && format[i + 1] != '%')
		{
			if (ft_detect(format[i + 1], ap, &len))
				i++;
			i++;
		}
		else
			ft_putchar_fd(format[i++], 1, &len);
	}
	va_end(ap);
	return (len);
}
