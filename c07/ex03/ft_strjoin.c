/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niclambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 10:57:42 by niclambe          #+#    #+#             */
/*   Updated: 2024/08/26 16:02:43 by niclambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	total_len(int size, char **strs, char *sep)
{
    int total;
    int i;

    total = 0;
    i = 0;

    while (i < size)
    {
        total = total + ft_strlen(strs[i]);
        i++;
    }
    total += ft_strlen(sep) * (size - 1);
	return (total);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
    char *resultat;
    int i;
    int total;
    
    total = total_len(size, strs, sep);
    resultat = malloc(sizeof(char) * (total + 1));
    if (resultat == NULL)
        return (NULL);
    i = 0;
    resultat[0] = '\0';
    while (i < size)
    {
        ft_strcat(resultat, strs[i]);
        if (i < size - 1)
            ft_strcat(resultat, sep);
        i++;
    }
    return (resultat);
}

int main(void)
{
    char *strs[] = {"Hello", "world", "42"};
    char *sep = "   |   ";
    char *result = ft_strjoin(4, strs, sep);

    printf("%s\n", result);
    free(result);

    return 0;
}