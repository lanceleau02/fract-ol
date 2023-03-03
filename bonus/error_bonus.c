/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laprieur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 14:13:26 by laprieur          #+#    #+#             */
/*   Updated: 2023/02/28 09:43:36 by laprieur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol_bonus.h"

static int	julia_error(char **argv)
{
	if (argv[1] == NULL || argv[4] != NULL || (ft_strcmp(argv[1], "Julia") != 0
			&& ft_strcmp(argv[1], "Mandelbrot") != 0))
		return (1);
	else if (argv[2] == NULL
		|| (ft_atod(argv[2]) < -2.00 || ft_atod(argv[2]) > 2.00)
		|| (ft_isdouble(argv[2]) == 1))
		return (1);
	else if (argv[3] == NULL
		|| (ft_atod(argv[3]) < -2.00 || ft_atod(argv[3]) > 2.00)
		|| (ft_isdouble(argv[3]) == 1))
		return (1);
	return (0);
}

int	error(char *set, char **argv)
{
	if (argv[1] == NULL || (ft_strcmp(set, "Julia") != 0
			&& ft_strcmp(set, "Mandelbrot") != 0
			&& ft_strcmp(set, "BurningShip") != 0))
		ft_printf("Invalid set's name, please enter a valid name.\n");
	else if (julia_error(argv) == 1 && ft_strcmp(set, "Mandelbrot") != 0
		&& ft_strcmp(set, "BurningShip") != 0)
	{
		ft_printf("Invalid parameter(s) for the Julia set.\n");
		ft_printf("[1] : Julia\n");
		ft_printf("[2 & 3] : Constants between -2.00 and 2.00\n");
	}
	else if (ft_strcmp(set, "Mandelbrot") == 0 && argv[2] != NULL)
		ft_printf("The Mandelbrot set does not take any arguments.\n");
	else if (ft_strcmp(set, "BurningShip") == 0 && argv[2] != NULL)
		ft_printf("The Burning Ship set does not take any arguments.\n");
	else
		return (0);
	return (1);
}
