/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmotie- <nmotie-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 23:28:14 by nmotie-           #+#    #+#             */
/*   Updated: 2024/03/19 01:45:57 by nmotie-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putadr(unsigned long n, int *len)
{
	char	*base;

	base = "0123456789abcdef";
	{
		if (n < 16)
		{
			ft_putchar(base[n], len);
		}
		else
		{
			ft_putadr(n / 16, len);
			ft_putadr(n % 16, len);
		}
	}
}
