/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niclambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 14:18:50 by niclambe          #+#    #+#             */
/*   Updated: 2024/08/12 18:52:16 by niclambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find)
{
    int i;
    int j;

    i = 0;
    j = 0;
    if (to_find[0])
        return (str);
    while (str[i] != '\0')
    {
        while (str[i + j] == to_find[j])
        {
            if (to_find[j + 1] == '\0')
                return (&str[i]);
            j++;
        }
        j = 0;
        i++;
    }
    return (0);
}

int main (void)
{
    char str[] = "abc";
    char tofind[] = "z";
    printf("%s", ft_strstr(str, tofind));
    return (0);
}