/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analbarr <analbarr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 19:07:35 by analbarr          #+#    #+#             */
/*   Updated: 2022/10/20 19:21:57 by analbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Elimina los caracteres de 'set' en 's1' (desde el principio y desde el final
 * hasta encontrar un caracter no perteneciente a 'set'. Devuelve el nuevo
 * string con una reserva de malloc.*/

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	char	*trim;

	if (!s1 || !set)
		return (0);
	while (*s1 && ft_strchr(set, *s1))
			s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, s1[i]))
			i--;
	trim = ft_substr(s1, 0, i + 1);
	return (trim);
}

/*int	main(void)
{
	char const s1[] = "hola carebola";
	char const set[] = "la";

	printf("%s", ft_strtrim(s1, set));
}*/

/*s1++ avanza el puntero y no solo la posicion [i] con respecto al puntero
 * inicial*/
