/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   image_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laprieur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 10:36:59 by laprieur          #+#    #+#             */
/*   Updated: 2023/02/21 14:24:48 by laprieur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol_bonus.h"

static void	my_mlx_pixel_put(t_data *data, int x, int y, int color)
{
	char	*dst;

	dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
	*(unsigned int *)dst = color;
}

void	color(t_data *data, int x, int y, int iterations)
{
	if (iterations == data->max_iterations)
		my_mlx_pixel_put(data, x, y, 0x000000);
	else
		my_mlx_pixel_put(data, x, y, data->palette + iterations * 75);
}
