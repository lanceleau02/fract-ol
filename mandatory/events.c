/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   events.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laprieur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 10:09:56 by laprieur          #+#    #+#             */
/*   Updated: 2023/02/14 16:31:55 by laprieur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	zoom(t_data *data)
{
	data->zoom *= 1.50;
	if (ft_strncmp(data->argv[1], "Julia", 5) == 0)
	{
		julia(data, ft_atod(data->argv[2]), ft_atod(data->argv[3]));
		mlx_put_image_to_window(data->mlx, data->mlx_win, data->img, 0, 0);
	}
	else if (ft_strncmp(data->argv[1], "Mandelbrot", 10) == 0)
	{
		mandelbrot(data);
		mlx_put_image_to_window(data->mlx, data->mlx_win, data->img, 0, 0);
	}
}

/*void	precision(t_data *data)
{
	data->max_iterations *= 1.5;
	if (ft_strncmp(data->argv[1], "Julia", 5) == 0)
	{
		julia(data, ft_atod(data->argv[2]), ft_atod(data->argv[3]));
		create_image(data);
	}
	else if (ft_strncmp(data->argv[1], "Mandelbrot", 10) == 0)
	{
		mandelbrot(data);
		create_image(data);
	}
}*/
