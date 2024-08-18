/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niclambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 12:42:17 by niclambe          #+#    #+#             */
/*   Updated: 2024/08/18 15:16:34 by niclambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_iterative_factorial(int nb)
{
    int i;
    int res;

    i = 1;
    res = 1;
    if (nb < 0)
    {
        return (0);
    }
    else
    {
        while (i <= nb)
        {
            res = res * i;
            i++;
        }
        return (res);
    }
    return (0);
}
int main(int argc, char *argv[])
{
    int nb = atoi(argv[1]);
    if (argc == 2)
    {
        printf("%d", ft_iterative_factorial(nb));
    }
    else
        printf("%s", "Error");
    return (0);
}