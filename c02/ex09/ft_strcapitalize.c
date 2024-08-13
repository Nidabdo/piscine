/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niclambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 13:38:44 by niclambe          #+#    #+#             */
/*   Updated: 2024/08/13 15:36:30 by niclambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	while (str[i] != '\0')
	{
		while (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if (!(str[i - 1] >= '0' && str[i - 1] <= '9'))
		{
			if (!(str[i - 1] >= 'a' && str[i - 1] <= 'z'))
			{
				if (!(str[i - 1] >= 'A' && str[i - 1] <= 'Z'))
				{
					if (str[i] >= 'a' && str[i] <= 'z')
						str[i] -= 32;
				}
			}
		}
		i++;
	}
	return (str);
}

/* int main(void)
{
	char str[] = "salut, comment tu VAS ? 42mots quarAnte-deux; cInquante+et+un";
	printf("%s", ft_strcapitalize(str));
	return (0);
}
 */