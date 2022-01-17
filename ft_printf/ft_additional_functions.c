/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_additional_functions.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 12:05:29 by ysakine           #+#    #+#             */
/*   Updated: 2021/11/25 12:05:31 by ysakine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putuint(unsigned int nb, int *len)
{
	if (nb < 10)
		ft_putchar_fd(nb + '0', 1, len);
	else
	{
		ft_putuint(nb / 10, len);
		ft_putuint(nb % 10, len);
	}
}
