/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_valid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 13:52:20 by jcheron           #+#    #+#             */
/*   Updated: 2024/08/18 17:49:43 by jcheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "rush01.h"

int	ft_checks(t_game *game, int row, int col)
{
	if (col == 3)
	{
		if (!ft_check_row_left(game, row) || !ft_check_row_right(game, row))
		{
			game->grid[row][col] = 0;
			return (0);
		}
	}
	if (row == 3)
	{
		if (!ft_check_col_up(game, col) || !ft_check_col_down(game, col))
		{
			game->grid[row][col] = 0;
			return (0);
		}
	}
	return (1);
}

int	ft_is_valid(t_game *game, int row, int col, int num)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (game->grid[row][i] == num || game->grid[i][col] == num)
			return (0);
		i++;
	}
	game->grid[row][col] = num;
	return (ft_checks(game, row, col));
}
