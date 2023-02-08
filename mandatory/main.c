/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laprieur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 11:16:29 by laprieur          #+#    #+#             */
/*   Updated: 2023/02/08 17:06:44 by laprieur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	void	*mlx;
	void	*mlx_win;
	t_data	*data;
	int		i;
	double	d;
	long double ld;

	if (argc < 1)
		return (1);
	data = malloc(sizeof(t_data));
	data->max_iterations = MAX_ITERATIONS;
	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, 970, 970, "fract-ol");
	data->img = mlx_new_image(mlx, 970, 970);
	data->addr = mlx_get_data_addr(data->img, &data->bits_per_pixel, \
		&data->line_length, &data->endian);
	fractol(argc, argv, data);
	d = 1.797693;
	for (i = 0; i < 308; i++)
	{
		d *= 10;
	}
	printf("d = %lf\n\n", d);
	ld = 1.189731;
	for (i = 0; i < 4932; i++)
	{
		ld *= 10;
	}
	printf("ld = %Lf\n", ld);
	mlx_put_image_to_window(mlx, mlx_win, data->img, 0, 0);
	mlx_loop(mlx);
}
