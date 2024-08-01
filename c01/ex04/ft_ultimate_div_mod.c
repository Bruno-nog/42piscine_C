/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 21:10:03 by brunogue          #+#    #+#             */
/*   Updated: 2024/07/17 22:59:55 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	ra;
	int	rb;

	ra = *a;
	rb = *b;
	*a = ra / rb;
	*b = ra % rb;
}
/*
#include <stdio.h>

int	main(void)
{
	int	a = 23;
	int	b = 2;

	ft_ultimate_div_mod(&a, &b);
	printf("%d, %d\n", a, b);
	return (0);
}*/
