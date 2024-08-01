/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 06:25:55 by brunogue          #+#    #+#             */
/*   Updated: 2024/07/22 12:58:07 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	invert;

	index = 0;
	invert = size - 1;
	while (index < invert)
	{
		size = tab[index];
		tab[index] = tab[invert];
		tab[invert] = size;
		index++;
		invert--;
	}
}

#include <stdio.h>

int	main(void)
{
	int tab[] = {1, 5, 2, 4, 3, 6, 7, 9, 8};
	int size = 9;
	int index;

	index = 0;

	ft_rev_int_tab(tab, size);
	while (index < size)
	{
		printf("%d", tab[index]);
		index++;
	}
	return (0);
}
