/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niclambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 12:40:23 by niclambe          #+#    #+#             */
/*   Updated: 2024/08/11 12:42:51 by niclambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
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
		if (str[i] >= 'A' && str[i] <= 'Z')
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
	printf("%d", ft_str_is_uppercase("AF5EWF"));
	return (0);
}
*/