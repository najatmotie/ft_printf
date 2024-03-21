/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmotie- <nmotie-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 01:40:33 by nmotie-           #+#    #+#             */
/*   Updated: 2024/03/19 03:01:07 by nmotie-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *len)
{
	char	str;

	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		(*len) += 11;
	}
	else if (n < 0)
	{
		write(1, "-", 1);
		(*len)++;
		ft_putnbr(-n, len);
	}
	else if (n > 9)
	{
		ft_putnbr(n / 10, len);
		ft_putnbr(n % 10, len);
	}
	else
	{
		str = n + 48;
		write(1, &str, 1);
		(*len)++;
	}
}
