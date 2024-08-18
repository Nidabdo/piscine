/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 13:52:31 by jcheron           #+#    #+#             */
/*   Updated: 2024/08/18 17:55:30 by jcheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "rush01.h"

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	t_game	game;

	if (argc != 2)
	{
		write(2, "Error\n", 6);
		return (1);
	}
	i = 0;
	j = 0;
	while (argv[1][i] && j < 16)
	{
		if (argv[1][i] >= '1' && argv[1][i] <= '4')
		{
			game.constraints[j] = argv[1][i] - '0';
			j++;
		}
		i++;
	}
	if (ft_solve(&game, 0, 0))
		ft_display_grid(&game);
	else
		write(2, "Error\n", 6);
	return (0);
}
