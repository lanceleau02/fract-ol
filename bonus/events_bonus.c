/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   events_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laprieur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 10:09:56 by laprieur          #+#    #+#             */
/*   Updated: 2023/03/02 13:46:42 by laprieur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol_bonus.h"

void	zoom(t_data *data, int x, int y)
{
	t_complex	coordinates;
	double		mousex_beforezoom;
	double		mousey_beforezoom;

	y = WIN_H - y;
	coordinates = convert_coordinates(x, y, data);
	mousex_beforezoom = coordinates.r + data->move_x;
	mousey_beforezoom = coordinates.i + data->move_y;
	data->zoom *= 1.50;
	coordinates = convert_coordinates(x, y, data);
	data->move_x = mousex_beforezoom - coordinates.r;
	data->move_y = mousey_beforezoom - coordinates.i;
	if (data->set == 1)
		julia(data, ft_atod(data->argv[2]), ft_atod(data->argv[3]));
	else if (data->set == 2)
		mandelbrot(data);
	else if (data->set == 3)
		burning_ship(data);
}

void	dezoom(t_data *data, int x, int y)
{
	t_complex	coordinates;
	double		mousex_beforezoom;
	double		mousey_beforezoom;

	y = WIN_H - y;
	coordinates = convert_coordinates(x, y, data);
	mousex_beforezoom = coordinates.r + data->move_x;
	mousey_beforezoom = coordinates.i + data->move_y;
	data->zoom *= 0.75;
	coordinates = convert_coordinates(x, y, data);
	data->move_x = mousex_beforezoom - coordinates.r;
	data->move_y = mousey_beforezoom - coordinates.i;
	if (data->set == 1)
		julia(data, ft_atod(data->argv[2]), ft_atod(data->argv[3]));
	else if (data->set == 2)
		mandelbrot(data);
	else if (data->set == 3)
		burning_ship(data);
}

void	precision(t_data *data, int sign)
{
	if (sign == 1)
		data->max_iterations *= 1.50;
	else if (data->max_iterations > 2)
		data->max_iterations *= 0.75;
	if (data->set == 1)
		julia(data, ft_atod(data->argv[2]), ft_atod(data->argv[3]));
	else if (data->set == 2)
		mandelbrot(data);
	else if (data->set == 3)
		burning_ship(data);
}

void	palette(t_data *data)
{
	data->i += 1;
	if (data->i > 4)
		data->i = 0;
	if (data->i == 0)
		data->palette = 0x1214a1;
	else if (data->i == 1)
		data->palette = 0x660000;
	else if (data->i == 2)
		data->palette = 0xa69b00;
	else if (data->i == 3)
		data->palette = 0x009519;
	else if (data->i == 4)
		data->palette = 0x380070;
	if (data->set == 1)
		julia(data, ft_atod(data->argv[2]), ft_atod(data->argv[3]));
	else if (data->set == 2)
		mandelbrot(data);
	else if (data->set == 3)
		burning_ship(data);
}
