/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niclambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 08:23:08 by niclambe          #+#    #+#             */
/*   Updated: 2024/08/20 08:59:51 by niclambe         ###   ########.fr       */
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
int ft_find_next_prime(int nb)
{
    int i;

    i = nb;
    while (ft_is_prime(i) != 1)
        i++;
    return (i);
}
// int main(void)
// {
//     int nb = 4;
//     printf("%d",ft_find_next_prime(nb));
//     return (0);
// }