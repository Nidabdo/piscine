/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niclambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 11:52:50 by niclambe          #+#    #+#             */
/*   Updated: 2024/08/11 12:33:00 by niclambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
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
		if (str[i] >= '0' && str[i] <= '9')
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
	printf("%d", ft_str_is_numeric("16436514651d"));
	return (0);
}
*/
