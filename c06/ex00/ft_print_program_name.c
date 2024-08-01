/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 22:43:32 by brunogue          #+#    #+#             */
/*   Updated: 2024/07/31 05:28:05 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_exec(char *argv[])
{
	int	i;

	i = 0;
	while (argv[0][i] != '\0')
	{
		write (1, &argv[0][i], 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc)
	{
		ft_print_exec(argv);
	}
	return (0);
}
