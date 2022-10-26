/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analbarr <analbarr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 17:07:55 by analbarr          #+#    #+#             */
/*   Updated: 2022/10/20 18:08:50 by analbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Copia 'len' bytes de 'src' a 'dst'*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (!src && !dst)
		return (0);
	if (src < dst)
	{
		i = len;
		while (i > 0)
		{
			i--;
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dst);
}

/*int main (void)
{
	char src[] = "aaa";
	char dst[] = "zzzzzz";
	size_t len;

	len = 2;
	printf("%s", ft_memmove(dst, src, len));
}*/
