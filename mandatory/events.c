/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   events.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laprieur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 10:09:56 by laprieur          #+#    #+#             */
/*   Updated: 2023/03/02 13:44:06 by laprieur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	zoom(t_data *data)
{
	data->zoom *= 1.50;
	if (data->set == 1)
		julia(data, ft_atod(data->argv[2]), ft_atod(data->argv[3]));
	else if (data->set == 2)
		mandelbrot(data);
}

void	dezoom(t_data *data)
{
	data->zoom /= 1.50;
	if (data->set == 1)
		julia(data, ft_atod(data->argv[2]), ft_atod(data->argv[3]));
	else if (data->set == 2)
		mandelbrot(data);
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
}
