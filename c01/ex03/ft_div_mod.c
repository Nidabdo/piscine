/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niclambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 09:47:54 by niclambe          #+#    #+#             */
/*   Updated: 2024/08/08 10:04:47 by niclambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main(void)
{
	int a = 10;
	int b = 3;
	int div;
	int mod;
	ft_div_mod(a, b, &div, &mod);
	printf("%d, %d", div, mod);
	return (0);
}
*/
