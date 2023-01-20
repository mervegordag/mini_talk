/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megordag <megordag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 17:13:15 by megordag          #+#    #+#             */
/*   Updated: 2023/01/10 17:29:22 by megordag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		nb = nb % 10;
	}
	if (nb < 10)
		ft_putchar(nb + 48);
}

void	handle(int signum)
{
	static char	c;
	static int	g_i = 128;

	if (signum == SIGUSR2)
		c += g_i;
	g_i /= 2;
	if (g_i == 0)
	{
		write (1, &c, 1);
		g_i = 128;
		c = 0;
	}
}

int	main(void)
{
	ft_putstr("pid : ");
	ft_putnbr(getpid());
	ft_putstr("\n");
	signal(SIGUSR1, &handle);
	signal(SIGUSR2, &handle);
	while (1)
	{
		continue ;
	}
	return (0);
}
