/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 13:33:01 by brunogue          #+#    #+#             */
/*   Updated: 2024/07/18 07:52:16 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int		start;
	int		finish;
	char	num[5];

	start = 0;
	while (start <= 98)
	{
		finish = start + 1;
		while (finish <= 99)
		{
			num[0] = start / 10 + '0';
			num[1] = start % 10 + '0';
			num[2] = ' ';
			num[3] = finish / 10 + '0';
			num[4] = finish % 10 + '0';
			write (1, num, 5);
			if (!(start == 98 && finish == 99))
			{
				write(1, ", ", 2);
			}
			finish++;
		}
		start++;
	}
}
