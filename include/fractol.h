/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laprieur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 11:27:54 by laprieur          #+#    #+#             */
/*   Updated: 2023/03/02 12:10:43 by laprieur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include "mlx.h"
# include "mlx_int.h"
# include "libft.h"
# include <math.h>
# include <stdlib.h>

# define MAX_ITERATIONS 50
# define WIN_W 800
# define WIN_H 800

typedef struct s_complex
{
	double	r;
	double	i;
}	t_complex;

typedef struct s_data
{
	int		bits_per_pixel;
	int		endian;
	int		line_length;
	int		max_iterations;
	int		set;
	char	*addr;
	char	**argv;
	void	*img;
	void	*mlx;
	void	*mlx_win;
	double	move_x;
	double	move_y;
	double	zoom;
}	t_data;

int			close_window(t_data *data);
int			define_iterations(t_data *data, t_complex z, t_complex c);
int			error(char *set, char **argv);
int			key_hook(int keycode, t_data *data);
int			mouse_hook(int mousecode, int x, int y, t_data *data);
void		color(t_data *data, int x, int y, int iterations);
void		create_image(t_data *data);
void		create_window(t_data *data);
void		dezoom(t_data *data);
void		fractol(char **argv, t_data *data);
void		julia(t_data *data, double c_real, double c_imaginary);
void		mandelbrot(t_data *data);
void		mlx(t_data *data);
void		precision(t_data *data, int sign);
void		zoom(t_data *data);
t_complex	convert_coordinates(int x, int y, t_data *data);

#endif
