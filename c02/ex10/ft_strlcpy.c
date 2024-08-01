/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 14:20:43 by brunogue          #+#    #+#             */
/*   Updated: 2024/07/25 16:26:52 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	counter;

	counter = 0;
	if (size == 0)
	{
		*dest = '\0';
		while (src[counter] != '\0')
		{
			counter++;
		}
		return (counter);
	}
	while (counter < size - 1 && src[counter] != '\0')
	{
		dest[counter] = src[counter];
		counter++;
	}
	dest[counter] = '\0';
	while (src[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}
/*
#include <stdio.h>
int	main(void)
{
	char	src[] = "hey oh";
	char	dest[10];
	unsigned int	size;

	size = 10;
	printf("Comprimento da string de origem: %d\n", ft_strlcpy(dest, src, size));
	printf("Cópia: %s\n", dest);
	return (0);
}*/