/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laprieur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:38:01 by laprieur          #+#    #+#             */
/*   Updated: 2023/02/14 11:53:01 by laprieur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	fractol(char **argv, t_data *data)
{
	if (error(argv[1], argv) == 1)
		return ;
	else if (ft_strncmp(argv[1], "Julia", 5) == 0)
	{
		create_window(data);
		julia(data, ft_atod(argv[2]), ft_atod(argv[3]));
		create_image(data);
	}
	else if (ft_strncmp(argv[1], "Mandelbrot", 10) == 0)
	{
		create_window(data);
		mandelbrot(data);
		create_image(data);
	}
}
