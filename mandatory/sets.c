/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sets.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laprieur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 09:37:26 by laprieur          #+#    #+#             */
/*   Updated: 2023/03/02 13:43:47 by laprieur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	julia(t_data *data, double c_real, double c_imaginary)
{
	int			x;
	int			y;
	t_complex	z;
	t_complex	c;
	int			iterations;

	x = 0;
	while (x < WIN_W)
	{
		y = 0;
		while (y < WIN_H)
		{
			c.r = c_real;
			c.i = c_imaginary;
			z = convert_coordinates(x, y, data);
			iterations = define_iterations(data, z, c);
			color(data, x, y, iterations);
			y++;
		}
		x++;
	}
	mlx_put_image_to_window(data->mlx, data->mlx_win, data->img, 0, 0);
}

void	mandelbrot(t_data *data)
{
	int			x;
	int			y;
	t_complex	z;
	t_complex	c;
	int			iterations;

	x = 0;
	while (x < WIN_W)
	{
		y = 0;
		while (y < WIN_H)
		{
			z.r = 0.00;
			z.i = 0.00;
			c = convert_coordinates(x, y, data);
			iterations = define_iterations(data, z, c);
			color(data, x, y, iterations);
			y++;
		}
		x++;
	}
	mlx_put_image_to_window(data->mlx, data->mlx_win, data->img, 0, 0);
}
