/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 11:54:02 by ysakine           #+#    #+#             */
/*   Updated: 2021/11/07 11:55:52 by ysakine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_fd(char *s, int fd, int *len)
{
	size_t	i;

	i = 0;
	if (!s)
	{
		ft_putstr_fd("(null)", fd, len);
		return (0);
	}
	while (s[i])
	{
		ft_putchar_fd(s[i], fd, len);
		i++;
	}
	return (i);
}
