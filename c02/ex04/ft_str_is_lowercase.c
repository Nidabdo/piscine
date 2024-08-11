/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niclambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 12:34:54 by niclambe          #+#    #+#             */
/*   Updated: 2024/08/11 12:39:11 by niclambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			j = 1;
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (j);
}

/*
int main(void)
{
	printf("%d", ft_str_is_lowercase(""));
	return (0);
}
*/