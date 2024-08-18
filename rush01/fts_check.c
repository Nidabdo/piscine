/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fts_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 16:32:19 by jcheron           #+#    #+#             */
/*   Updated: 2024/08/18 17:50:31 by jcheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	ft_check_row_left(t_game *game, int row)
{
	int	visible_count;
	int	max_height;
	int	i;

	visible_count = 0;
	max_height = 0;
	i = 0;
	while (i < 4)
	{
		if (game->grid[row][i] > max_height)
		{
			max_height = game->grid[row][i];
			visible_count++;
		}
		i++;
	}
	if (game->grid[row][3] == 0)
		return (1);
	return (visible_count == game->constraints[row + 8]);
}

int	ft_check_row_right(t_game *game, int row)
{
	int	visible_count;
	int	max_height;
	int	i;

	visible_count = 0;
	max_height = 0;
	i = 3;
	while (i >= 0)
	{
		if (game->grid[row][i] > max_height)
		{
			max_height = game->grid[row][i];
			visible_count++;
		}
		i--;
	}
	if (game->grid[row][0] == 0)
		return (1);
	return (visible_count == game->constraints[row + 12]);
}

int	ft_check_col_up(t_game *game, int col)
{
	int	visible_count;
	int	max_height;
	int	i;

	visible_count = 0;
	max_height = 0;
	i = 0;
	while (i < 4)
	{
		if (game->grid[i][col] > max_height)
		{
			max_height = game->grid[i][col];
			visible_count++;
		}
		i++;
	}
	return (visible_count == game->constraints[col]);
}

int	ft_check_col_down(t_game *game, int col)
{
	int	visible_count;
	int	max_height;
	int	i;

	visible_count = 0;
	max_height = 0;
	i = 3;
	while (i >= 0)
	{
		if (game->grid[i][col] > max_height)
		{
			max_height = game->grid[i][col];
			visible_count++;
		}
		i--;
	}
	return (visible_count == game->constraints[col + 4]);
}
