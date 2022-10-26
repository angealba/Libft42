/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analbarr <analbarr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 18:23:46 by analbarr          #+#    #+#             */
/*   Updated: 2022/10/20 18:49:10 by analbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*localiza la primera ocurrencia de "len" bytes de un substring (needle) en un 
 * string mayor (haystack). No busca despues del '\0'. Devuelve haystack si
 * needle está vacia, Null si needle no está dentro de haystack o un pointer
 * a la primera ocurrencia*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (i < len && haystack[i] != '\0')
	{
		if (haystack[i] == needle[j])
		{
			while (haystack[i + j] == needle[j] && i + j < len)
			{
				if (needle[j + 1] == '\0')
					return ((char *)haystack + i);
				j++;
			}
			j = 0;
		}
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char h[] = "hola carebola";
	char n[] = "la";

	printf("%s", ft_strnstr(h, n, 6));
}*/
