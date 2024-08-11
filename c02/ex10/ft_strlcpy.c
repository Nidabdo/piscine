/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niclambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 14:57:50 by niclambe          #+#    #+#             */
/*   Updated: 2024/08/11 15:45:47 by niclambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    int i;
    unsigned int src_len;

    i = 0;
    src_len = 0;
    while (src[src_len] != '\0')
    {
        src_len++;
    }

    if (size > 0)
    {
        while (src[i] != '\0' && i < size - 1) 
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }
    return (src_len);
}