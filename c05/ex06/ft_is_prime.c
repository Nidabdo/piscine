/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niclambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 17:31:32 by niclambe          #+#    #+#             */
/*   Updated: 2024/08/20 08:20:07 by niclambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_is_prime(int nb)
{
    int i;

    i = 2;
    if (nb <= 1)
        return (0);
    while (i * i <= nb)
    {
        if (nb % i == 0)
            return (0);
        i++;
    }
    return (1);
}

// int main (void)
// {
//     int nb = 50;

//     printf("%d", ft_is_prime(nb));
//     return (0);
// }