/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niclambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 18:03:53 by niclambe          #+#    #+#             */
/*   Updated: 2024/08/19 08:31:54 by niclambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_factorial(int nb)
{
    if (nb == 0 || nb == 1)
        return (1);
    return (nb * ft_recursive_factorial(nb - 1));
}
// int main(void)
// {
//     int nb = 5;
//     printf("%d", ft_recursive_factorial(nb));
//     return (0);
// }