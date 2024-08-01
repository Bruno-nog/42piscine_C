/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 11:49:26 by brunogue          #+#    #+#             */
/*   Updated: 2024/07/25 12:42:56 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_uppercase(char c)
{
	return (c >= 65 && c <= 90);
}

int	is_lowercase(char c)
{
	return (c >= 97 && c <= 122);
}

int	is_numbers(char c)
{
	return (c >= 48 && c <= 57);
}

int	is_alphanumeric(char c)
{
	return (is_uppercase(c) || is_lowercase(c) || is_numbers(c));
}

char	*ft_strcapitalize(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		if (!is_alphanumeric(str[index - 1]) && is_lowercase(str[index]))
		str[index] = str[index] - 32;
		else if (is_alphanumeric(str[index - 1]) && is_uppercase(str[index]))
	str[index] = str[index] + 32;
	index++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "oi,as 65quarenta-e-duas; cinquenta+e+um";
	printf("%s\n", ft_strcapitalize(str));
	return (0);
}*/
