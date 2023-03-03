/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laprieur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:38:01 by laprieur          #+#    #+#             */
/*   Updated: 2023/02/23 15:26:38 by laprieur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol_bonus.h"

void	fractol(char **argv, t_data *data)
{
	if (ft_strcmp(argv[1], "Julia") == 0)
	{
		data->set = 1;
		create_window(data);
		julia(data, ft_atod(argv[2]), ft_atod(argv[3]));
		create_image(data);
	}
	else if (ft_strcmp(argv[1], "Mandelbrot") == 0)
	{
		data->set = 2;
		create_window(data);
		mandelbrot(data);
		create_image(data);
	}
	else if (ft_strcmp(argv[1], "BurningShip") == 0)
	{
		data->set = 3;
		create_window(data);
		burning_ship(data);
		create_image(data);
	}
}
