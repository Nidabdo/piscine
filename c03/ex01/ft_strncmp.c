/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niclambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 09:23:16 by niclambe          #+#    #+#             */
/*   Updated: 2024/08/12 09:49:59 by niclambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				res;
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i != n)
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
	char s1[] = "ba2";
	char s2[] = "ba1";
	unsigned int n = 3;

	printf("%d", ft_strncmp(s1, s2, n));
	return (0);
}
*/