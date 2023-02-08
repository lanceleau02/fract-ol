/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laprieur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:38:01 by laprieur          #+#    #+#             */
/*   Updated: 2023/02/08 14:53:23 by laprieur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	fractol(int argc, char **argv, t_data *data)
{
	char	*set;

	(void)argc;
	if (argv[1] == NULL)
		return ;
	set = ft_strdup((const char *)argv[1]);
	/*if (ft_strncmp(set, "Julia", 5) == 0 && )
	{
		julia();
	}
	else */if (ft_strncmp(set, "Mandelbrot", 10) == 0)
	{
		mandelbrot(data);
	}
	else
		error(set);
	free (set);
	set = NULL;
}
