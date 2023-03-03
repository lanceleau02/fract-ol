/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   events_plus_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laprieur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 10:08:37 by laprieur          #+#    #+#             */
/*   Updated: 2023/02/21 15:48:34 by laprieur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol_bonus.h"

void	move_up(t_data *data)
{
	data->move_y += (0.50 / data->zoom);
	if (data->set == 1)
		julia(data, ft_atod(data->argv[2]), ft_atod(data->argv[3]));
	else if (data->set == 2)
		mandelbrot(data);
	else if (data->set == 3)
		burning_ship(data);
}

void	move_down(t_data *data)
{
	data->move_y += (-0.50 / data->zoom);
	if (data->set == 1)
		julia(data, ft_atod(data->argv[2]), ft_atod(data->argv[3]));
	else if (data->set == 2)
		mandelbrot(data);
	else if (data->set == 3)
		burning_ship(data);
}

void	move_left(t_data *data)
{
	data->move_x += (-0.50 / data->zoom);
	if (data->set == 1)
		julia(data, ft_atod(data->argv[2]), ft_atod(data->argv[3]));
	else if (data->set == 2)
		mandelbrot(data);
	else if (data->set == 3)
		burning_ship(data);
}

void	move_right(t_data *data)
{
	data->move_x += (0.50 / data->zoom);
	if (data->set == 1)
		julia(data, ft_atod(data->argv[2]), ft_atod(data->argv[3]));
	else if (data->set == 2)
		mandelbrot(data);
	else if (data->set == 3)
		burning_ship(data);
}
