/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdouble.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laprieur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 15:21:12 by laprieur          #+#    #+#             */
/*   Updated: 2023/02/13 12:02:00 by laprieur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdouble(const char *nptr)
{
	int	i;
	int	size;
	int	decimal_points;

	i = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == ' ')
		i++;
	while (nptr[i] == '-' || nptr[i] == '+')
		i++;
	size = 0;
	decimal_points = 0;
	while (ft_isdigit(nptr[i]) == 1 || nptr[i] == '.')
	{
		if (nptr[i] == '.')
			decimal_points++;
		size++;
		i++;
	}
	if (size > 311 || decimal_points != 1)
		return (1);
	return (0);
}
