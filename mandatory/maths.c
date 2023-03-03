/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maths.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laprieur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 10:45:28 by laprieur          #+#    #+#             */
/*   Updated: 2023/03/02 13:45:20 by laprieur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	define_iterations(t_data *data, t_complex z, t_complex c)
{
	int			iterations;
	t_complex	tmp;

	iterations = 0;
	tmp.r = 0.00;
	tmp.i = 0.00;
	while (iterations < data->max_iterations
		&& ((z.r * z.r) + (z.i * z.i)) <= 8.00)
	{
		tmp.r = z.r;
		tmp.i = z.i;
		z.r = (tmp.r * tmp.r) - (tmp.i * tmp.i) + c.r;
		z.i = 2.00 * (tmp.r * tmp.i) + c.i;
		iterations++;
	}
	return (iterations);
}

t_complex	convert_coordinates(int x, int y, t_data *data)
{
	t_complex	res;
	double		d_x;
	double		d_y;
	double		d_win_w;
	double		d_win_h;

	d_x = (double)x;
	d_y = (double)y;
	d_win_w = (double)WIN_W;
	d_win_h = (double)WIN_H;
	res.r = (((4.00 * d_x) / d_win_w) - 2.00) / data->zoom;
	res.i = (((4.00 * d_y) / d_win_h) - 2.00) / data->zoom;
	return (res);
}
