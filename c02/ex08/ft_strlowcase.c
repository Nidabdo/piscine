/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niclambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 13:30:53 by niclambe          #+#    #+#             */
/*   Updated: 2024/08/11 13:34:50 by niclambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

/*
int main(void)
{
	char str1[] = "hello world!";
	char str2[] = "Bonjour123";
	char str3[] = "42 is the answer";
	char str4[] = "already UPPERCASE";
	char str5[] = "";

	printf("Original: %s\n", str1);
	printf("Uppercase: %s\n\n", ft_strlowcase(str1));

	printf("Original: %s\n", str2);
	printf("Uppercase: %s\n\n", ft_strlowcase(str2));

	printf("Original: %s\n", str3);
	printf("Uppercase: %s\n\n", ft_strlowcase(str3));

	printf("Original: %s\n", str4);
	printf("Uppercase: %s\n\n", ft_strlowcase(str4));

	printf("Original: \"%s\"\n", str5);
	printf("Uppercase: \"%s\"\n", ft_strlowcase(str5));

	return 0;
}
*/