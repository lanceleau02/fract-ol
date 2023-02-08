/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maths.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laprieur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 10:45:28 by laprieur          #+#    #+#             */
/*   Updated: 2023/02/08 12:59:19 by laprieur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	define_iterations(t_data *data, t_complex z, t_complex c)
{
	int			iterations;
	t_complex	tmp;

	iterations = 0;
	tmp.r = 0;
	tmp.i = 0;
	while (iterations < data->max_iterations
		&& ((z.r * z.r) + (z.i * z.i)) <= 4.0)
	{
		tmp.r = z.r;
		tmp.i = z.i;
		z.r = (tmp.r * tmp.r) - (tmp.i * tmp.i) + c.r;
		z.i = 2.0 * (tmp.r * tmp.i) + c.i;
		iterations++;
	}
	return (iterations);
}

t_complex	convert_coordinates(int x, int y)
{
	t_complex	res;

	res.r = ((4 * (double)x) - (2 * WIN_W)) / WIN_W;
	res.i = ((4 * (double)y) - (2 * WIN_H)) / WIN_H;
	return (res);
}
