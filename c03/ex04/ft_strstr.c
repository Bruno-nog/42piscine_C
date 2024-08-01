/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 18:42:58 by brunogue          #+#    #+#             */
/*   Updated: 2024/07/29 20:22:18 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	c;

	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		c = 0;
		if (str[i] == to_find[c])
		{
			while ((str[i + c] == to_find[c]) && to_find[c] != '\0')
			{
				if (str[i + c] == to_find[c] && to_find[c + 1] == '\0')
				{
					return (&str[i]);
				}
				c++;
			}
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
    char    str[] = "inconstitucionalissimamente";
    char    search[] = "men";
    printf("%s", ft_strstr(str, search));
    return (0);
}*/