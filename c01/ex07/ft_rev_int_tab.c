/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niclambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 08:06:04 by niclambe          #+#    #+#             */
/*   Updated: 2024/08/26 08:30:51 by niclambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}

// int main(void)
// {
//     int size = 0;
//     int tab[] = {1, 2, 3, 4, 5};

//     ft_rev_int_tab(tab, size);
//     for (int i = 0; i < size; i++)
//         printf("%d ", tab[i]);
//     printf("\n");

//     return 0;
// }