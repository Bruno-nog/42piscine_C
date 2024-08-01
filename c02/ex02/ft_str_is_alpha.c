/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 12:23:52 by brunogue          #+#    #+#             */
/*   Updated: 2024/07/23 15:03:01 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char	*str)
{
	while (*str != '\0')
	{
		if (!((*str >= 65 && *str <= 90) || (*str >= 97 && *str <= 122)))
		{
			return (0);
		}
			str++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "sadjnij";
	
	printf("%d", ft_str_is_alpha(str));
	return (0);
}*/