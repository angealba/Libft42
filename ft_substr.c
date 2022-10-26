/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analbarr <analbarr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 20:20:54 by analbarr          #+#    #+#             */
/*   Updated: 2022/10/20 19:06:27 by analbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Reserva con malloc y devuelve un subtring de 's'. La substring empieza desde 
 * el indice 'start' y tiene como max long 'len'.*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	char			*subs;

	if (!s)
		return (0);
	if (ft_strlen(s) < len)
		len = ft_strlen(s);
	subs = (char *)malloc(sizeof(*s) * (len + 1));
	if (!subs)
		return (0);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			subs[j] = s[i];
			j++;
		}
		i++;
	}
	subs[j] = '\0';
	return (subs);
}

/*int	main(void)
{
	char s[] = "hola";
	
	printf("original: %s\nsubstr: %s\n", s, ft_substr(s, 3, 6));
	printf("puntero a s: %p\npuntero a subs: %p", s, ft_substr(s, 1, 3));
}*/
