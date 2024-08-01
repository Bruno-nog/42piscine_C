/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 15:47:05 by brunogue          #+#    #+#             */
/*   Updated: 2024/07/31 18:27:15 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n > 0)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		else if (*s1 == '\0')
		{
			return (0);
		}
			s1++;
			s2++;
			n--;
	}
	return (0);
}

#include <stdio.h>

int	main(void)
{
	char *s1 = "aaddjojihuĺ";
	char *s2 = "aaddh";

	printf("%d", ft_strncmp(s1, s2, 9));
	return (0);
}