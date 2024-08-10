/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niclambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 11:27:56 by niclambe          #+#    #+#             */
/*   Updated: 2024/08/10 12:20:48 by niclambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rush(int x, int y)
{
	int	hor;
	int	ver;

	if (x != 0 && y != 0)
	{
		hor = 0;
		while (x > hor)
		{
			if (hor == 0 || hor == x - 1)
			{
				ft_putchar('o');
			}
			else
			{
				ft_putchar('-');
			}
			hor++;
		}
		ft_putchar('\n');
		ver = 1;
		while (ver < y - 1)
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
	else
	{
		ft_putchar('\0');
	}
}

int	main(void)
{
	rush(0, 0);
	return (0);
}
