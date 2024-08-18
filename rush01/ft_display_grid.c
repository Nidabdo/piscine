/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_grid.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 13:52:35 by jcheron           #+#    #+#             */
/*   Updated: 2024/08/18 18:11:23 by jcheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "rush01.h"

void	ft_display_grid(t_game *game)
{
	int		row;
	int		col;
	char	num;

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			num = game->grid[row][col] + '0';
			write(1, &num, 1);
			if (col < 3)
				write(1, " ", 1);
			col++;
		}
		write(1, "\n", 1);
		row++;
	}
}
