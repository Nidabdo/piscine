/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niclambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 12:46:05 by niclambe          #+#    #+#             */
/*   Updated: 2024/08/11 12:55:58 by niclambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
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
		if (str[i] >= 32 && str[i] <= 126)
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
	printf("%d", ft_str_is_printable("rdrgurhe^((()26))"));
	return (0);
}
*/