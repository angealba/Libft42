/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analbarr <analbarr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 13:51:32 by analbarr          #+#    #+#             */
/*   Updated: 2022/10/20 18:19:40 by analbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Copia hasta 'dstsize-1' carácteres de 'src' a 'dst' agregando la
 * terminación Nul. Devuelve la long total de la cadena que se quiere crear 
 * (long de src)*/

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srcsize;
	size_t	i;

	srcsize = ft_strlen(src);
	i = 0;
	if (dstsize != 0)
	{
		while ((src[i] != '\0') && (i < (dstsize - 1)))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (srcsize);
}

/*int	main(void)
{
	char src[] = "aaaaa";
	char dst[] = "zzzzzzzz";
	size_t n;

	n = 4;
	printf("%zu", ft_strlcpy(dst, src, n));
}*/
