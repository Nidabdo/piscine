/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 13:52:27 by jcheron           #+#    #+#             */
/*   Updated: 2024/08/18 17:47:46 by jcheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "rush01.h"

int	ft_solve(t_game *game, int row, int col)
{
	int	num;

	if (row == 4)
		return (1);
	if (col == 4)
		return (ft_solve(game, row + 1, 0));
	num = 1;
	while (num <= 4)
	{
		if (ft_is_valid(game, row, col, num))
		{
			game->grid[row][col] = num;
			if (ft_solve(game, row, col + 1))
				return (1);
			game->grid[row][col] = 0;
		}
		num++;
	}
	return (0);
}
