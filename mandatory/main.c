/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laprieur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 11:16:29 by laprieur          #+#    #+#             */
/*   Updated: 2023/02/23 15:03:54 by laprieur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static void	struct_init(t_data *data, char **argv)
{
	data->argv = argv;
	data->max_iterations = MAX_ITERATIONS;
	data->move_x = 0.00;
	data->move_y = 0.00;
	data->zoom = 1.00;
}

int	main(int argc, char **argv)
{
	t_data	*data;

	(void)argc;
	if (error(argv[1], argv) == 1)
		return (1);
	data = malloc(sizeof(t_data));
	if (data == NULL)
		return (1);
	struct_init(data, argv);
	fractol(argv, data);
	free (data);
	data = NULL;
	return (0);
}
