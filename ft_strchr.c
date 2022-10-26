/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analbarr <analbarr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 21:08:05 by analbarr          #+#    #+#             */
/*   Updated: 2022/10/25 16:00:22 by analbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*localiza la primera ocurrencia de c en s y retorna el pointer al char 
 * encontrado(const char). Si c = '\0' también lo localiza.*/

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (const char)c)
			return ((char *)s + i);
		i++;
	}
	if ((const char)c == '\0')
		return ((char *)s + i);
	return (0);
}

/*int	main(void)
{
	int	c;
	char s[] = "hola";

	c = 'l';
	printf("%s", ft_strchr(s, c));
}*/
