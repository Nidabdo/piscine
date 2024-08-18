/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 17:21:58 by jcheron           #+#    #+#             */
/*   Updated: 2024/08/18 18:11:33 by jcheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# define RUSH01_H

# include <unistd.h>

typedef struct s_game
{
	int	grid[4][4];
	int	constraints[16];
}	t_game;

int		ft_is_valid(t_game *game, int row, int col, int num);
int		ft_solve(t_game *game, int row, int col);
void	ft_display_grid(t_game *game);
int		ft_check_row_left(t_game *game, int row);
int		ft_check_row_right(t_game *game, int row);
int		ft_check_col_up(t_game *game, int col);
int		ft_check_col_down(t_game *game, int col);

#endif
