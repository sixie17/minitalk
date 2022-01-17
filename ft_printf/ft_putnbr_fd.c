/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 12:04:13 by ysakine           #+#    #+#             */
/*   Updated: 2021/11/07 14:08:02 by ysakine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_fd(int nb, int fd, int *len)
{
	if (nb < 10 && nb >= 0)
		ft_putchar_fd(48 + nb, fd, len);
	else if (nb == -2147483648)
	{
		ft_putnbr_fd(nb / 10, fd, len);
		ft_putchar_fd('8', fd, len);
	}
	else if (nb < 0)
	{
		ft_putchar_fd('-', fd, len);
		ft_putnbr_fd(-nb, fd, len);
	}
	else
	{
		ft_putnbr_fd(nb / 10, fd, len);
		ft_putnbr_fd(nb % 10, fd, len);
	}
}
