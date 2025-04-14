/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dydaniel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 17:52:16 by dydaniel          #+#    #+#             */
/*   Updated: 2024/07/14 20:17:26 by dydaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c);

void	roof(int l, int h)
{
	int	k;

	k = 1;
	if (l == 1 && h >= 1)
	{
		ft_putchar('A');
		ft_putchar('\n');
	}
	if (l != 1 && h >= 1)
	{
		ft_putchar('A');
		while (k < l - 1)
		{
			ft_putchar('B');
			k++;
		}
		ft_putchar('A');
		ft_putchar('\n');
	}
}

void	walls(int l, int h)
{
	int	k;
	int	height;

	height = 1;
	k = 1;
	while (height < h - 1)
	{
		ft_putchar('B');
		while (k < l - 1)
		{
			ft_putchar(' ');
			k = k + 1;
		}
		ft_putchar('B');
		ft_putchar('\n');
		k = 1;
		height++;
	}
}

void	ground(int l, int h)
{
	int	k;

	k = 1;
	if (h != 1)
	{
		ft_putchar('C');
		while (k < l - 1)
		{
			ft_putchar('B');
			k++;
		}
		if (l > 1)
		{
			ft_putchar('C');
		}
	}
}

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		return ;
	}
	if (x >= 1 && y >= 1)
	{	
		roof(x, y);
		walls(x, y);
		ground(x, y);
	}
}
