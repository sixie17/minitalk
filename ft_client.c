/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_client.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 05:22:52 by ysakine           #+#    #+#             */
/*   Updated: 2021/12/19 05:22:54 by ysakine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_minitalk.h"

int	main(int argc, char *argv[])
{
	int	i;
	int	j;
	int	pid;

	i = 0;
	if (argc == 3)
	{
		pid = ft_atoi(argv[1]);
		while (argv[2][i] && pid > 0)
		{
			j = 8;
			while (j--)
			{
				if (argv[2][i] % 2 == 0)
					kill(pid, SIGUSR1);
				else
					kill(pid, SIGUSR2);
				usleep(800);
				argv[2][i] = argv[2][i] / 2;
			}
			i++;
		}
	}
}
