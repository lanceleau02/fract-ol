/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laprieur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 15:11:50 by laprieur          #+#    #+#             */
/*   Updated: 2023/02/14 16:31:16 by laprieur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	create_window(t_data *data)
{
	data->mlx = mlx_init();
	data->mlx_win = mlx_new_window(data->mlx, 970, 970, "fract-ol");
	data->img = mlx_new_image(data->mlx, 970, 970);
	data->addr = mlx_get_data_addr(data->img, &data->bits_per_pixel, \
		&data->line_length, &data->endian);
}

int	close_window(t_data *data)
{
	mlx_loop_end(data->mlx);
	return (0);
}

int	mouse_hook(int mousecode, int x, int y, t_data *data)
{
	(void)x;
	(void)y;
	ft_printf("mousecode = %d\n", mousecode);
	if (mousecode == 4)
		zoom(data);
	/*if (mousecode == 5)
		dezoom(data);*/
	return (0);
}

int	key_hook(int keycode, t_data *data)
{
	ft_printf("keycode = %d\n", keycode);
	if (keycode == 65307) // 65307 == ESC
		close_window(data);
	//if (keycode == 61 || keycode == 65451) // 61 et 65451 == +
		//precision(data);
	return (0);
}

void	create_image(t_data *data)
{
	mlx_put_image_to_window(data->mlx, data->mlx_win, data->img, 0, 0);
	mlx_key_hook(data->mlx_win, key_hook, data);
	mlx_mouse_hook(data->mlx_win, mouse_hook, data);
	mlx_hook(data->mlx_win, 17, 1L<<0, close_window, data);
	mlx_loop(data->mlx);
	mlx_destroy_image(data->mlx, data->img);
	mlx_destroy_window(data->mlx, data->mlx_win);
	mlx_destroy_display(data->mlx);
	free(data->mlx);
	data->mlx = NULL;
}
