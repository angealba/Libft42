/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analbarr <analbarr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:09:59 by analbarr          #+#    #+#             */
/*   Updated: 2022/10/25 16:00:57 by analbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* localiza la última ocurrencia de 'c' en 's' y retorna el pointer al char 
 * encontrado(const char). Si c = '\0' también lo localiza.*/

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if (c == '\0')
		return ((char *)s + i);
	while (i >= 0)
	{
		if (s[i] == (const char)c)
			return ((char *)s + i);
		i--;
	}
	return (0);
}

/*int	main(void)
{
	int c;
	char s[] = "casa";

	c = 'o';
	printf("%p", ft_strrchr(s, c));
}*/
