/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niclambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 09:20:53 by niclambe          #+#    #+#             */
/*   Updated: 2024/08/20 09:40:42 by niclambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char *argv[])
{
    (void)argc;
    int i;

    i = 0;
    while (argv[0][i])
    {
        write(1, &argv[0][i], 1);
        i++;
    }
    write(1, "\n", 1);
    return (0);
}