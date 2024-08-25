/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niclambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 13:32:57 by niclambe          #+#    #+#             */
/*   Updated: 2024/08/25 14:22:12 by niclambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a, char b, char c, char d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (!(a == '9' && b == '8' && c == '9' && d == '9'))
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	ft_ft(char a, char b, char c, char d)
{

	while (a <= '9')
	{
		b = '0';
		while (b <= '9')
		{
			c = a;
			while (c <= '9')
			{
				if (c == a)
					d = b + 1;
				else
					d = '0';
				while (d <= '9')
				{
					ft_putchar(a, b, c, d);
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}
}
void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = '0';
	b = '0';
	c = '0';
	d = '0';
	ft_ft(a, b, c, d);
}

int main (void)
{
    ft_print_comb2();
    return (0);
}