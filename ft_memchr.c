/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analbarr <analbarr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:28:43 by analbarr          #+#    #+#             */
/*   Updated: 2022/10/20 18:38:38 by analbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Localiza la primera ocurrencia de 'c' en 's' y retorna el pointer al byte
 * correspondiente o Null si no lo encuentra*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (0);
}

/*int	main(void)
{
	int	c;
	char	s[] = "hola";

	c = 'a';
	printf("%p", ft_memchr(s, c, 3));
}*/
