/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 19:42:55 by brunogue          #+#    #+#             */
/*   Updated: 2024/07/17 21:15:01 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>

int	main(void)
{
	int	a = 12;
	int	b = 3;
	int	div;
	int	mod;
	ft_div_mod(a, b, &div, &mod);
	printf("%d, %d\n", div, mod);
	return (0);
}*/
