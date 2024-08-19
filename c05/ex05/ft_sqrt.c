/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niclambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 13:15:52 by niclambe          #+#    #+#             */
/*   Updated: 2024/08/19 17:28:09 by niclambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_sqrt(int nb)
{
    int i;
    
    i = 0;
    if (nb <= 0)
        return (0);
    while (i * i < nb)
        i++;
    if (i * i == nb)
        return (i);
    else
        return (0);
}

int main(void)
{
    int nb = 10000;

    printf("%d", ft_sqrt(nb));
    return (0);
}