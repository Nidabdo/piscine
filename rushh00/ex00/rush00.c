/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niclambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 11:27:56 by niclambe          #+#    #+#             */
/*   Updated: 2024/08/10 15:59:04 by niclambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	hortop(int x)
{
	int	hor;

	hor = 0;
	while (x > hor)
	{
		if (hor == 0 || hor == x - 1)
			ft_putchar('\\');
		else
			ft_putchar('-');
		hor++;
	}
	ft_putchar('\n');
}

void	vermid(int x, int y)
{
	int	ver;
	int	hor;

	ver = 0;
	while (ver < y - 2)
	{
		ft_putchar('|');
		hor = 1;
		while (hor < x - 1)
		{
			ft_putchar(' ');
			hor++;
		}
		if (x > 1)
			ft_putchar('|');
		ft_putchar('\n');
		ver++;
	}
}

void	horbot(int x, int y)
{
	int	hor;

	if (y > 1)
	{
		hor = 0;
		while (hor < x)
		{
			if (hor == 0 || hor == x - 1)
				ft_putchar('o');
			else
				ft_putchar('-');
			hor++;
		}
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	if (x != 0 && y != 0)
	{
		hortop(x);
		vermid(x, y);
		horbot(x, y);
	}
	else
	{
		ft_putchar('\0');
	}
}
