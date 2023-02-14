/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laprieur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 11:27:54 by laprieur          #+#    #+#             */
/*   Updated: 2023/02/14 15:06:08 by laprieur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include "mlx.h"
# include "mlx_int.h"
# include "libft.h"
# include <stdlib.h>
# include <math.h>

# define MAX_ITERATIONS 150
# define WIN_W 970
# define WIN_H 970

typedef struct s_complex
{
	double	r;
	double	i;
}	t_complex;

typedef struct s_data
{
	void	*mlx;
	void	*mlx_win;
	void	*img;
	char	*addr;
	char	**argv;
	double	zoom;
	double	move_x;
	double	move_y;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
	int		max_iterations;
}	t_data;

void		fractol(char **argv, t_data *data);
void		mandelbrot(t_data *data);
void		julia(t_data *data, double c_real, double c_imaginary);
void		create_window(t_data *data);
void		create_image(t_data *data);
void		mlx(t_data *data);
void		color(t_data *data, int x, int y, int iterations);
void		my_mlx_pixel_put(t_data *data, int x, int y, int color);
int			define_iterations(t_data *data, t_complex z, t_complex c);
t_complex	convert_coordinates(int x, int y, t_data *data);
int			error(char *set, char **argv);
void		precision(t_data *data);
void		zoom(t_data *data);

#endif
