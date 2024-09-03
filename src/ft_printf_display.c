/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_display.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achivela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 16:43:07 by achivela          #+#    #+#             */
/*   Updated: 2024/05/24 16:43:11 by achivela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *s)
{
	int	i;

	if (s == NULL)
	{
		ft_putstr("(null)");
		return (6);
	}
	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
}

void	ft_putnbr(int n, int *len)
{
	if (n == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		(*len)++;
		ft_putnbr(147483648, len);
	}
	else if (n < 0)
	{
		ft_putchar('-');
		ft_putnbr(n * -1, len);
	}
	else if (n > 9)
	{
		ft_putnbr(n / 10, len);
		ft_putchar(n % 10 + '0');
	}
	else
	{
		ft_putchar(n + '0');
	}
	(*len)++;
}

void	ft_unsign(unsigned int n, int *len)
{
	if (n > 9)
	{
		ft_unsign(n / 10, len);
		ft_putchar(n % 10 + '0');
	}
	else
	{
		ft_putchar(n + '0');
	}
	(*len)++;
}
