/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achivela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 16:41:57 by achivela          #+#    #+#             */
/*   Updated: 2024/05/24 16:42:01 by achivela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int		ft_putstr(char *s);
int		ft_putchar(char c);
int		ft_printf(const char *s, ...);

void	ft_printp(unsigned long long p, int *len);
void	ft_printxp(unsigned long long n, int *len);
void	ft_printhex(unsigned int n, char c, int *len);
void	ft_unsign(unsigned int n, int *len);
void	ft_putnbr(int n, int *len);

#endif
