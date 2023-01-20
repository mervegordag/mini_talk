/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megordag <megordag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 17:14:14 by megordag          #+#    #+#             */
/*   Updated: 2023/01/10 17:14:17 by megordag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <unistd.h>
# include <signal.h>
# include <signal.h>

void	ft_putstr(char *str);
void	handle(int signum);
int		ft_atoi(char *s);
void	ft_send(int num, int rem, int pid);
void	send_signal(int n, int pid);
void	ft_putchar(char c);
void	ft_putnbr(int nb);

#endif
