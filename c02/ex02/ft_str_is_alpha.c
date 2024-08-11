/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niclambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 10:36:24 by niclambe          #+#    #+#             */
/*   Updated: 2024/08/11 11:43:34 by niclambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
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
	printf("%d", ft_str_is_alpha("a5"));
	return (0);
}
*/
