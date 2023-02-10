/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laprieur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 11:16:29 by laprieur          #+#    #+#             */
/*   Updated: 2023/02/10 15:20:57 by laprieur         ###   ########.fr       */
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
	data->max_iterations = MAX_ITERATIONS;
	fractol(argc, argv, data);
}
