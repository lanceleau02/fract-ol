/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laprieur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 14:13:26 by laprieur          #+#    #+#             */
/*   Updated: 2023/02/10 15:06:42 by laprieur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static int	julia_error(char **argv)
{
	if (argv[1] == NULL || (ft_strncmp(argv[1], "Julia", 5) != 0
		&& ft_strncmp(argv[1], "Mandelbrot", 10) != 0))
		return (1);
	else if (argv[2] == NULL
		|| (ft_atod(argv[2]) < -2.00 && ft_atod(argv[2]) > 2.00))
		return (1);
	else if (argv[3] == NULL
		|| (ft_atod(argv[3]) < -2.00 && ft_atod(argv[3]) > 2.00))
		return (1);
	return (0);
}

int	error(char *set, char **argv)
{
	if (argv[1] == NULL || (ft_strncmp(set, "Julia", 5) != 0
			&& ft_strncmp(set, "Mandelbrot", 10) != 0))
	{
		ft_printf("Invalid set's name, please enter a valid name.\n");
		return (1);
	}
	else if (julia_error(argv) == 1 && ft_strncmp(set, "Mandelbrot", 10) != 0)
	{
		ft_printf("Invalid parameter(s) for the Julia set.\n");
		ft_printf("[1] : Julia\n");
		ft_printf("[2 & 3] : Constants\n");
		return (1);
	}
	else if (ft_strncmp(set, "Mandelbrot", 10) == 0
		&& (argv[2] != NULL && argv[3] != NULL))
	{
		ft_printf("The Mandelbrot set does not take any arguments.\n");
		return (1);
	}
	else
		return (0);
}
