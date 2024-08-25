/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niclambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 12:02:20 by niclambe          #+#    #+#             */
/*   Updated: 2024/08/25 13:31:19 by niclambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int i;

	i = 0;
	if (min >= max)
    {
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc((max - min) * sizeof(int));
	while (i < (max - min))
	{
		range[0][i] = min + i;
		i++;
	}
	return (max - min);
}

int main(void)
{
	int *range;
	int	res;
	int i;

	i = 0;
	res = ft_ultimate_range(&range, 10, 15);
	while (i < 5)
	{
		printf("%d\n", range[i]);
		i++;
	}
	free(range);
	return (0);
}