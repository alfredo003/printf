/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achivela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 16:41:37 by achivela          #+#    #+#             */
/*   Updated: 2024/05/24 16:41:40 by achivela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	print_format(va_list v, char forma)
{
	int	len;

	len = 0;
	if (forma == 'c')
		len += ft_putchar((char)va_arg(v, int));
	else if (forma == 's')
		len += ft_putstr(va_arg(v, char *));
	else if (forma == 'i' || forma == 'd')
		ft_putnbr((int)va_arg(v, int), &len);
	else if (forma == 'u')
		ft_unsign(va_arg(v, unsigned int), &len);
	else if (forma == 'x' || forma == 'X')
		ft_printhex(va_arg(v, unsigned int), forma, &len);
	else if (forma == 'p')
		ft_printp(va_arg(v, unsigned long), &len);
	else if (forma == '%')
		len += ft_putchar('%');
	return (len);
}

int	ft_printf(const char *s, ...)
{
	va_list	v;
	int		i;
	int		len;

	len = 0;
	i = 0;
	va_start(v, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			len += print_format(v, s[i + 1]);
			i++;
		}
		else
			len += ft_putchar(s[i]);
		i++;
	}
	va_end(v);
	return (len);
}
