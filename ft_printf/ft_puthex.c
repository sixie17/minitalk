/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 12:05:59 by ysakine           #+#    #+#             */
/*   Updated: 2021/11/25 12:06:01 by ysakine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned long long num, int *len)
{
	char	*hex;

	hex = "0123456789abcdef";
	ft_putchar_fd(hex[num], 1, len);
}

void	ft_puthex_upper(unsigned long long num, int *len)
{
	char	*hex;

	hex = "0123456789ABCDEF";
	ft_putchar_fd(hex[num], 1, len);
}

void	ft_putnbr_hex(unsigned long long nb, int *len)
{
	if (nb < 16)
		ft_puthex(nb, len);
	else
	{
		ft_putnbr_hex(nb / 16, len);
		ft_putnbr_hex(nb % 16, len);
	}
}

void	ft_putnbr_hex_upper(unsigned long long nb, int *len)
{
	if (nb < 16)
		ft_puthex_upper(nb, len);
	else
	{
		ft_putnbr_hex_upper(nb / 16, len);
		ft_putnbr_hex_upper(nb % 16, len);
	}
}
