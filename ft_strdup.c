/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analbarr <analbarr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 19:17:08 by analbarr          #+#    #+#             */
/*   Updated: 2022/10/20 18:51:48 by analbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Reserva memoria suficiente para copiar un string(s1). Lo copia y devuelve un 
 * puntero a la copia.*/

char	*ft_strdup(const char *s1)
{
	size_t	size;
	char	*s2;

	size = ft_strlen(s1) + 1;
	s2 = malloc (size);
	if (!s2)
		return (0);
	ft_memcpy (s2, s1, size);
	return (s2);
}

/*int	main(void)
{
	char	s1[] = "hola";

	printf("s1 es: %s y s2 es %s", s1, ft_strdup(s1));
}*/
