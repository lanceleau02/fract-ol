/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_bonus.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laprieur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 15:11:50 by laprieur          #+#    #+#             */
/*   Updated: 2023/02/17 14:43:32 by laprieur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol_bonus.h"

void	create_window(t_data *data)
{
	data->mlx = mlx_init();
	data->mlx_win = mlx_new_window(data->mlx, WIN_W, WIN_H, "fract-ol");
	data->img = mlx_new_image(data->mlx, WIN_W, WIN_H);
	data->addr = mlx_get_data_addr(data->img, &data->bits_per_pixel, \
		&data->line_length, &data->endian);
}

void	create_image(t_data *data)
{
	mlx_put_image_to_window(data->mlx, data->mlx_win, data->img, 0, 0);
	mlx_key_hook(data->mlx_win, key_hook, data);
	mlx_mouse_hook(data->mlx_win, mouse_hook, data);
	mlx_hook(data->mlx_win, 17, 1L << 0, close_window, data);
	mlx_loop(data->mlx);
	mlx_destroy_image(data->mlx, data->img);
	mlx_destroy_window(data->mlx, data->mlx_win);
	mlx_destroy_display(data->mlx);
	free (data->mlx);
	data->mlx = NULL;
}

int	close_window(t_data *data)
{
	mlx_loop_end(data->mlx);
	return (0);
}
