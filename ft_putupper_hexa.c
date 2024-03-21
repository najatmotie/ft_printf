/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putupper_hexa.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmotie- <nmotie-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 01:40:18 by nmotie-           #+#    #+#             */
/*   Updated: 2024/03/20 23:14:57 by nmotie-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putupper_hexa(unsigned int n, int *len)
{
	char	*base;

	base = "0123456789ABCDEF";
	{
		if (n < 16)
		{
			ft_putchar(base[n], len);
		}
		else
		{
			ft_putupper_hexa(n / 16, len);
			ft_putupper_hexa(n % 16, len);
		}
	}
}
