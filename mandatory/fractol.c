/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laprieur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:38:01 by laprieur          #+#    #+#             */
/*   Updated: 2023/02/10 12:14:17 by laprieur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	fractol(int argc, char **argv, t_data *data)
{
	char	*set;

	(void)argc;
	set = ft_strdup((const char *)argv[1]);
	if (error(set, argv) == 1)
		return ;
	if (ft_strncmp(set, "Julia", 5) == 0)
	{
		create_window(data);
		julia(data, ft_atod(argv[2]), ft_atod(argv[3]));
		create_image(data);
	}
	else if (ft_strncmp(set, "Mandelbrot", 10) == 0)
	{
		create_window(data);
		mandelbrot(data);
		create_image(data);
	}
	free (set);
	set = NULL;
}
