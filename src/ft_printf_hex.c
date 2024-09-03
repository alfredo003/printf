/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achivela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 16:42:16 by achivela          #+#    #+#             */
/*   Updated: 2024/05/24 16:42:18 by achivela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_printxp(unsigned long long n, int *len)
{
	char	*base;

	base = "0123456789abcdef";
	if (n > 15)
		ft_printxp(n / 16, len);
	ft_putchar(base[n % 16]);
	(*len)++;
}

void	ft_printp(unsigned long long p, int *len)
{
	if (p == 0)
	{
		ft_putstr("(nil)");
		(*len) += 5;
		return ;
	}
	ft_putstr("0x");
	(*len) += 2;
	ft_printxp(p, len);
}

void	ft_printhex(unsigned int n, char c, int *len)
{
	char	*base;
	char	*base2;

	base = "0123456789abcdef";
	base2 = "0123456789ABCDEF";
	if (n > 15)
		ft_printhex(n / 16, c, len);
	if (c == 'X')
		ft_putchar(base2[n % 16]);
	else
		ft_putchar(base[n % 16]);
	(*len)++;
}
