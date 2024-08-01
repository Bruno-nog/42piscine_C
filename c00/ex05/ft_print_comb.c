/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 12:35:24 by brunogue          #+#    #+#             */
/*   Updated: 2024/07/16 20:55:45 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(char num_first, char num_mid, char num_last)
{
	write (1, &num_first, 1);
	write (1, &num_mid, 1);
	write (1, &num_last, 1);
}

void	ft_print_comb(void)
{
	char	num_first;
	char	num_mid;
	char	num_last;

	num_first = '0';
	while (num_first <= '7')
	{
		num_mid = num_first + 1;
		while (num_mid <= '8')
		{
		num_last = num_mid + 1;
			while (num_last <= '9')
			{
				ft_print_numbers(num_first, num_mid, num_last);
				if (num_first != '7')
				{
					write (1, ", ", 2);
				}
				num_last++;
			}
			num_mid++;
		}
		num_first++;
	}
}
