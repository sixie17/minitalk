/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 12:05:54 by ysakine           #+#    #+#             */
/*   Updated: 2021/11/25 12:05:55 by ysakine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
void	ft_puthex(unsigned long long num, int *len);
void	ft_puthex_upper(unsigned long long num, int *len);
void	ft_putnbr_hex(unsigned long long nb, int *len);
void	ft_putnbr_hex_upper(unsigned long long nb, int *len);
void	ft_putuint(unsigned int nb, int *len);
int		ft_putstr_fd(char *s, int fd, int *len);
void	ft_putnbr_fd(int nb, int fd, int *len);
int		ft_putchar_fd(char c, int fd, int *len);
#endif
