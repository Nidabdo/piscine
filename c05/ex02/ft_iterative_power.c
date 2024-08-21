/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niclambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 08:01:10 by niclambe          #+#    #+#             */
/*   Updated: 2024/08/21 18:18:14 by niclambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	res;

	res = 1;
	i = 0;
	if (nb == 0 && power == 0)
		return (1);
	if (power < 0)
		return (0);
	else
	{
		while (i < power)
		{
			res = res * nb;
			i++;
		}
	}
	return (res);
}
// int main(int argc, char *argv[])
// {
//     int nb = atoi(argv[1]);
//     int power = atoi(argv[2]);
//     if (argc == 3)
//     {
//         printf("%d", ft_iterative_power(nb, power));
//     }
//     else
// 		printf("%s", "Error");
//     return (0);
// }
