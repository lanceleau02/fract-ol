/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laprieur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 14:13:26 by laprieur          #+#    #+#             */
/*   Updated: 2023/02/09 15:08:36 by laprieur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	error(char *set)
{
	if (ft_strncmp(set, "Julia", 5) == 0)
	{
		ft_printf("Invalid parameter(s) for the Julia set.\n");
		ft_printf("[1] : Julia\n");
		ft_printf("[2 & 3] : Constants\n");
	}
	else
		ft_printf("Invalid set's name, please enter a valid one.\n");
	return (1);
}
