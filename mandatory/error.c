/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laprieur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 14:13:26 by laprieur          #+#    #+#             */
/*   Updated: 2023/02/08 14:32:44 by laprieur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	error(char *set)
{
	if (ft_strncmp(set, "Julia", 5) == 0)
	{
		ft_printf("Invalid parameter, please enter a valid one.\n");
		ft_printf("[1] : Name's set\n");
		ft_printf("[2 & 3] : Constants\n");
	}
	else
		ft_printf("Invalid set's name, please enter a valid one.\n");
	return (1);
}
