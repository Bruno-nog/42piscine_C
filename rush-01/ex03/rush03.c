/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 12:50:08 by brunogue          #+#    #+#             */
/*   Updated: 2025/04/14 12:50:39 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	first_line(int x, int y)
{
	int	bridge;

	if (x > 2)
	{
		bridge = x - 2;
		ft_putchar('A');
		while (bridge > 0)
		{
			ft_putchar('B');
			bridge--;
		}
		ft_putchar('C');
		ft_putchar('\n');
	}
	else if (x == 2)
	{
		ft_putchar('A');
		ft_putchar('C');
		ft_putchar('\n');
	}
	else if (x == 1)
	{
		ft_putchar('A');
		ft_putchar('\n');
	}
}

void	mid(int x, int y)
{
	int	cornerstone;
	int	empty;

	cornerstone = y - 2;
	while (cornerstone > 0)
	{
		empty = x - 2;
		if (x >= 2)
		{
			ft_putchar('B');
			while (empty > 0)
			{
				ft_putchar(' ');
				empty--;
			}
			ft_putchar('B');
			ft_putchar('\n');
		}
		else if (x == 1)
		{
			ft_putchar('B');
			ft_putchar('\n');
		}
		cornerstone--;
	}
}

void	last_line(int x)
{
	int	bridge;

	if (x > 2)
	{
		bridge = x - 2;
		ft_putchar('A');
		while (bridge > 0)
		{
			ft_putchar('B');
			bridge--;
		}
		ft_putchar('C');
		ft_putchar('\n');
	}
	else if (x == 2)
	{
		ft_putchar('A');
		ft_putchar('C');
		ft_putchar('\n');
	}
	else if (x == 1)
	{
		ft_putchar('A');
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		write(1, "\n", 1);
		write(1, "Erro: O número deve ser positivo e maior que zero.\n", 70);
		write(1, "\n", 1);
		return ;
	}
	if (x == 1 && y == 1)
	{
		ft_putchar('A');
		ft_putchar('\n');
		return ;
	}
	if (y == 1 && x > 1)
	{
		first_line(x, y);
		return ;
	}
	first_line(x, y);
	if (y < 2)
	{
		return ;
	}
	mid(x, y);
	last_line(x);
}
