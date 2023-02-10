/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atod.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laprieur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 12:09:08 by laprieur          #+#    #+#             */
/*   Updated: 2023/02/10 14:06:40 by laprieur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static double	decimal_part(const char *nptr)
{
	int		i;
	double	nb;
	double	decimal;

	i = 0;
	while (nptr[i] != '.')
		i++;
	i++;
	nb = 0.0;
	decimal = 0.1;
	while (ft_isdigit(nptr[i]) == 1)
	{
		nb = nb + decimal * (nptr[i] - 48);
		decimal /= 10;
		i++;
	}
	return (nb);
}

static double	integer_part(const char *nptr)
{
	int		i;
	double	minus;
	double	nb;

	i = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == ' ')
		i++;
	minus = 1.0;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			minus *= -1.0;
		i++;
	}
	nb = 0;
	while (ft_isdigit(nptr[i]) == 1 && nptr[i] != '.')
	{
		nb = nb * 10 + (nptr[i] - 48);
		i++;
	}
	nb = nb * minus;
	return (nb);
}

double	ft_atod(const char *nptr)
{
	double	integer;
	double	decimal;
	double	nb;

	integer = integer_part(nptr);
	decimal = decimal_part(nptr);
	nb = integer + decimal;
	return (nb);
}
