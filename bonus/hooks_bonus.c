/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hooks_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laprieur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 11:43:00 by laprieur          #+#    #+#             */
/*   Updated: 2023/02/20 11:29:34 by laprieur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol_bonus.h"

int	key_hook(int keycode, t_data *data)
{
	if (keycode == XK_Escape)
		close_window(data);
	if (keycode == XK_equal || keycode == XK_KP_Add)
		precision(data, 1);
	if (keycode == XK_minus || keycode == XK_KP_Subtract)
		precision(data, 2);
	if (keycode == XK_w || keycode == XK_Up)
		move_up(data);
	if (keycode == XK_s || keycode == XK_Down)
		move_down(data);
	if (keycode == XK_a || keycode == XK_Left)
		move_left(data);
	if (keycode == XK_d || keycode == XK_Right)
		move_right(data);
	if (keycode == XK_p)
		palette(data);
	return (0);
}

int	mouse_hook(int mousecode, int x, int y, t_data *data)
{
	if (mousecode == 4)
		zoom(data, x, y);
	if (mousecode == 5)
		dezoom(data, x, y);
	return (0);
}
