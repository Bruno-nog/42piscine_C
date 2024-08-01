/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 10:07:25 by brunogue          #+#    #+#             */
/*   Updated: 2024/07/18 10:08:27 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	index;
	int	temp;
	int	sort;

	sort = 0;
	while (!sort)
	{
		sort = 1;
		index = 0;
		while (index < size - 1)
		{
			if (tab[index] > tab[index + 1])
			{
				temp = tab[index];
				tab[index] = tab[index + 1];
				tab[index + 1] = temp;
				sort = 0;
			}
			index++;
		}
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int tab[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int size = 9;
	int index;

	index = 0;

	ft_sort_int_tab(tab, size);
	while (index < size)
	{
		printf("%d", tab[index]);
		index++;
	}
	return (0);
}*/
