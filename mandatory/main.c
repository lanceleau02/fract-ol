/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laprieur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 11:16:29 by laprieur          #+#    #+#             */
/*   Updated: 2023/02/14 14:38:53 by laprieur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	main(int argc, char **argv)
{
	t_data	*data;

	if (argc < 2)
	{
		error(NULL, argv);
		return (1);
	}
	data = malloc(sizeof(t_data));
	if (data == NULL)
		return (1);
	data->max_iterations = MAX_ITERATIONS;
	data->argv = argv;
	data->zoom = 1.00;
	data->move_x = 0.00;
	data->move_y = 0.00;
	fractol(argv, data);
	free (data);
	data = NULL;
}
