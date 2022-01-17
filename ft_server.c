/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 22:39:33 by ysakine           #+#    #+#             */
/*   Updated: 2021/12/15 22:39:36 by ysakine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_minitalk.h"

void	message(int a)
{
	static char	character;
	static int	power;

	a = a - SIGUSR1;
	if (!power)
		power = 1;
	if (power == 128)
	{
		ft_printf("%c", character);
		character = 0;
		power = 0;
	}
	else
	{
		character += (power * a);
		power *= 2;
	}
}

int	main(void)
{
	int		pid;
	void	(*f)(int);

	pid = getpid();
	f = &message;
	ft_printf("%d\n", pid);
	while (1)
	{
		signal(SIGUSR1, f);
		signal(SIGUSR2, f);
	}
}
