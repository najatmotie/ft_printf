/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmotie- <nmotie-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 23:28:22 by nmotie-           #+#    #+#             */
/*   Updated: 2024/03/21 02:55:17 by nmotie-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	check_format(char c, va_list ap, int *len)
{
	if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(ap, int), len);
	else if (c == 'c')
		ft_putchar(va_arg(ap, int), len);
	else if (c == 's')
		ft_putstr(va_arg(ap, char *), len);
	else if (c == 'u')
		ft_putunbr(va_arg(ap, unsigned int), len);
	else if (c == 'p')
	{
		ft_putstr("0x", len);
		ft_putadr(va_arg(ap, unsigned long), len);
	}
	else if (c == 'x')
		ft_putlower_hexa(va_arg(ap, unsigned int), len);
	else if (c == 'X')
		ft_putupper_hexa(va_arg(ap, unsigned int), len);
	else if (c == '%')
		ft_putchar('%', len);
	else
		ft_putchar(c, len);
}

int	ft_printf(const char *format, ...)
{
	int		len;
	int		i;
	va_list	ap;

	va_start(ap, format);
	i = 0;
	len = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			i++;
			check_format(format[i], ap, &len);
		}
		else if (format[i] != '%')
			ft_putchar(format[i], &len);
		i++;
	}
	va_end(ap);
	return (len);
}
