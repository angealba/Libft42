/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analbarr <analbarr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 16:39:31 by analbarr          #+#    #+#             */
/*   Updated: 2022/10/20 14:53:11 by analbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Reserva memoria con malloc y concatena s1 y s2. Devuelve la nueva string.*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	i;
	unsigned int	j;
	size_t			len;
	char			*news;

	if (!s1 || !s2)
		return (0);
	len = ft_strlen(s1) + ft_strlen(s2);
	news = (char *)malloc(len + 1);
	if (!news)
		return (0);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		news[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		news[i + j] = s2[j];
		j++;
	}
	news[i + j] = '\0';
	return (news);
}

/*int	main(void)
{
	char s1[] = "hola ";
	char s2[] = "carebola";

	printf("newstring: %s", ft_strjoin(s1, s2));
}*/
