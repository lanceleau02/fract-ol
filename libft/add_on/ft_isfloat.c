/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isfloat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laprieur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 15:21:12 by laprieur          #+#    #+#             */
/*   Updated: 2023/02/10 15:40:50 by laprieur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isfloat(const char *nptr)
{
	int	i;
	int	size;

	i = 0;
	size = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == ' ')
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
		i++;
	if (ft_isdigit(nb[i]) == 1)
	{
		size++;
		i++;
	}
	if (nb[i] == '.')
	{
		size++;
		i++;
	}
	while (ft_isdigit(nb[i]) == 1 && size < 309)
	{
		size++;
		i++;
	}
}
