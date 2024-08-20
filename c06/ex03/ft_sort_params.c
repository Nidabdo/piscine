/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niclambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 12:07:59 by niclambe          #+#    #+#             */
/*   Updated: 2024/08/20 15:58:59 by niclambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

void	ft_swap(char *a, char *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

int main(int argc, char *argv[])
{
    int i;
    int j;

    i = 1;
    j = 2;
    while (argv[argc - 1])
    {
        
        i++;
    }
    return (0);
}