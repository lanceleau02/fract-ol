/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laprieur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 11:27:54 by laprieur          #+#    #+#             */
/*   Updated: 2023/02/08 14:33:49 by laprieur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include "mlx.h"
# include "libft.h"
# include <stdlib.h>
# include <math.h>

# define MAX_ITERATIONS 150
# define WIN_W 970
# define WIN_H 970

typedef struct	s_complex
{
	double	r;
	double	i;
}	t_complex;

typedef struct	s_data
{
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
	int		max_iterations;
}	t_data;

void		fractol(int argc, char **argv, t_data *data);
void		mandelbrot(t_data *data);
void		color(t_data *data, int x, int y, int iterations);
void		my_mlx_pixel_put(t_data *data, int x, int y, int color);
int			define_iterations(t_data *data, t_complex z, t_complex c);
t_complex	convert_coordinates(int x, int y);
int			error(char *set);

#endif
