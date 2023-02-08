/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sets.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laprieur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 09:37:26 by laprieur          #+#    #+#             */
/*   Updated: 2023/02/08 11:46:56 by laprieur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

/*void	julia(t_complex z, t_complex c)
{
	
}*/

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
			z.r = 0.0;
			z.i = 0.0;
			c = convert_coordinates(x, y);
			iterations = 0;
			iterations = define_iterations(data, z, c);
			color(data, x, y, iterations);
			y++;
		}
		x++;
	}
}
