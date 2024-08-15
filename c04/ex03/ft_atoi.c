/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niclambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 10:48:05 by niclambe          #+#    #+#             */
/*   Updated: 2024/08/15 15:57:42 by niclambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int ft_atoi(char *str)
{
	int	i;
	char *nb;

	i = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			nb[i] = str[i];
		i++;
	}
}

int main(void)
{
	printf("%d\n",ft_atoi(" ---+--+1234ab567"));
}