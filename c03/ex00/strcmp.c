/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niclambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 08:13:15 by niclambe          #+#    #+#             */
/*   Updated: 2024/08/12 12:48:26 by niclambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	res;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		res = s1[i] - s2[i];
		if (res > 0)
			return (res);
		if (res < 0)
			return (res);
		i++;
	}
	return (res);
}

/*
int main(void)
{
	char s1[] = "caab";
	char s2[] = "caaa";
	printf("%d", ft_strcmp(s1, s2));
	return (0);
}
*/