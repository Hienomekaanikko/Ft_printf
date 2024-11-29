/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 10:43:58 by msuokas           #+#    #+#             */
/*   Updated: 2024/11/29 10:55:18 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex_len(unsigned int n)
{
	int	len;

	len = 1;
	while (n >= 16)
	{
		len++;
		n /= 16;
	}
	return (len);
}

int	ft_put_hex(unsigned int n, const char format)
{
	int	result;

	result = 0;
	if (n >= 16)
	{
		result = ft_put_hex(n / 16, format);
		if (result == -1)
			return (-1);
		result = ft_put_hex(n % 16, format);
		if (result == -1)
			return (-1);
	}
	else
	{
		if (n <= 9)
			result = ft_write_char(n + '0');
		else if (format == 'x')
			result = ft_write_char(n - 10 + 'a');
		else if (format == 'X')
			result = ft_write_char(n - 10 + 'A');
		if (result == -1)
			return (-1);
	}
	return (0);
}

int	ft_hex(unsigned int n, const char format)
{
	if (ft_put_hex(n, format) == -1)
		return (-1);
	return (ft_hex_len(n));
}
