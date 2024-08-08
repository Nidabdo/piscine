/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niclambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 10:06:37 by niclambe          #+#    #+#             */
/*   Updated: 2024/08/08 10:32:36 by niclambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	resdiv;
	int	resmod;

	resDiv = *a / *b;
	resMod = *a % *b;
	*a = resDiv;
	*b = resMod;
}
/*
int main(void)
{
	int a = 10;
	int b = 3;
	
	ft_ultimate_div_mod(&a, &b);
	printf("%d, %d", a, b);
	return (0);
}
*/
