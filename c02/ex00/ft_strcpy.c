/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 14:58:51 by brunogue          #+#    #+#             */
/*   Updated: 2024/07/25 15:01:39 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char src[] = "Tava certo antes, a molinette que tinha uma opiniao diferente.";
	char dest[30];
	ft_strcpy(dest, src);
	printf("source: %s\n", src);
	printf("dest: %s\n", dest);
	return (0);
}*/
