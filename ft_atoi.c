/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/26 18:18:15 by ibohonos          #+#    #+#             */
/*   Updated: 2017/11/07 10:50:41 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	is_delimiter(char temp)
{
	if ((temp >= 9 && temp <= 13) || temp == 32)
		return (1);
	return (0);
}

int			ft_atoi(const char *nptr)
{
	int minus;
	int number;

	minus = 0;
	number = 0;
	while (is_delimiter(*nptr))
		nptr++;
	if (*nptr == '-')
		minus = 1;
	if (*nptr == '-' || *nptr == '+')
		nptr++;
	while (*nptr >= '0' && *nptr <= '9')
	{
		number *= 10;
		number += (int)(*nptr - '0');
		nptr++;
	}
	if (minus)
		number = -number;
	return (number);
}
