/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niclambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 09:23:16 by niclambe          #+#    #+#             */
/*   Updated: 2024/08/15 10:10:01 by niclambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i] && i < n)
		i++;
	if (n == i)
	{
		return (0);
	}
	return (s1[i] - s2[i]);
}

/* int main(void)
{
	char s1[] = "20";
	char s2[] = "20";
	unsigned int n = 0;

	printf("%d\n", ft_strncmp(s1, s2, n));
	printf("%d", ft_strncmp(s1, s2, n));
	return (0);
} */
