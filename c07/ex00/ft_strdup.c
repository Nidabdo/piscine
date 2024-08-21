/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niclambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 12:35:07 by niclambe          #+#    #+#             */
/*   Updated: 2024/08/21 12:58:38 by niclambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char *ft_strdup(char *src)
{
    char *dup;
    int i;

    i = 0;
    dup = malloc(ft_strlen(src) * sizeof(char));
    while (src[i])
    {
        dup[i] = src[i];
        i++;
    }
    return (dup);
}

// int main(void)
// {
//     char *dup = ft_strdup("test");
//     printf("%s", dup);
//     free(dup);
//     return (0);
// }