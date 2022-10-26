/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analbarr <analbarr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:53:26 by analbarr          #+#    #+#             */
/*   Updated: 2022/10/20 18:18:09 by analbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Agrega src al final de dst copiando max (dstsize - long original dst -1),
 * dejando espacio para terminacion Null. Devuelve la long total de la cadena
 * que se quiere crear (dst + src).*/

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dlen;
	size_t	i;

	if (dstsize == 0 || dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	dlen = ft_strlen(dst);
	i = 0;
	while ((src[i] != '\0') && (dlen + 1 < dstsize))
	{
		dst[dlen] = src[i];
		i++;
		dlen++;
	}
	dst[dlen] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[i]));
}

/*int	main (void)
{
	char	src[] = "hola";
	char	dst[] = "123456";
	size_t	n;

	n = 2;
	printf("%zu", ft_strlcat(dst, src, n));
}*/
