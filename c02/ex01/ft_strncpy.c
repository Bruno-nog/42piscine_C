/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 10:55:47 by brunogue          #+#    #+#             */
/*   Updated: 2024/07/25 14:56:05 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while (index < n && src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}
	return (dest);
}
/*
int	main(void)
{
	unsigned int	n;
	unsigned int	index;
	char	dest[10];
	char	src[] = "Hello!!";

	n = 2;
	index = 0;
	ft_strncpy(dest, src, 2);
	printf("%s\n", dest);
	return (0);
}*/
