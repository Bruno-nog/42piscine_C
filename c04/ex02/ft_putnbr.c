/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 16:03:16 by brunogue          #+#    #+#             */
/*   Updated: 2024/07/30 23:23:40 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	is_negative(int nb)
{
	if (nb == -2147483648)
	{
		write (1, "2", 1);
		write (1, "1", 1);
		write (1, "4", 1);
		write (1, "7", 1);
		write (1, "4", 1);
		write (1, "8", 1);
		write (1, "3", 1);
		write (1, "6", 1);
		write (1, "4", 1);
		write (1, "8", 1);
	}
}

void	ft_putnbr(int nb)
{
	int		index;
	char	max_int[11];

	index = 0;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
		is_negative(nb);
	}
	if (nb == 0)
	{
		write (1, "0", 1);
	}
	while (nb > 0)
	{
		max_int[index] = (nb % 10) + '0';
		nb = nb / 10;
		index++;
	}
	while (index > 0)
	{
		index--;
		write (1, &max_int[index], 1);
	}
}
/*
int	main(void)
{
	ft_putnbr(21473649);
	return (0);
}*/