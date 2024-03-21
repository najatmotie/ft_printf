/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlower_hexa.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmotie- <nmotie-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 01:40:21 by nmotie-           #+#    #+#             */
/*   Updated: 2024/03/20 23:13:58 by nmotie-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putlower_hexa(unsigned int n, int *len)
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
			ft_putlower_hexa(n / 16, len);
			ft_putlower_hexa(n % 16, len);
		}
	}
}
