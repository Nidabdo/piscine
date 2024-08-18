/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niclambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 10:51:17 by niclambe          #+#    #+#             */
/*   Updated: 2024/08/18 11:11:47 by niclambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#define N 4

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void display_map()
{
	int i;
	int j;
	while (i < N)
	{
		while (j < N)
		{
			ft_putchar(map[i][j]);
		}
		ft_putchar("\n");
		i++;
	}
}

void input(char **argv, char **tab)
{
	int i;

	i = 0;
	while (argv[1][i] < N)
	{
		tab[0][i] = argv[1][i];
		i++;
	}
	while (argv[1][i] < N + 4)
	{
		tab[1][i] = argv[1][i];
		i++;
	}
	while (argv[1][i] < N + 8)
	{
		tab[2][i] = argv[1][i];
		i++;
	}
	while (argv[1][i] < N + 12)
	{
		tab[3][i] = argv[1][i];
		i++;
	}
}

void solver(void)
{

}


int main(int argc, char **argv)
{
	int map[N][N];
	int tab[N][N];
	if (argc == 2)
	{
		input(argv, tab);
		display_map();
	}
	else
		write(2, "Error", 5);
	return (0);
}
