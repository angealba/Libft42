/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analbarr <analbarr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 17:44:48 by analbarr          #+#    #+#             */
/*   Updated: 2022/10/20 18:42:18 by analbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*compara n bytes de dos strings, devolviendo 0 si son iguales o la diferencia
 * entre los 2 primeros bytes que sean diferentes.*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char	s1[] = "hello";
	char	s2[] = "hEllo";

	printf("%d", ft_memcmp(s1, s2, 2));
}*/	
