/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analbarr <analbarr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:52:25 by analbarr          #+#    #+#             */
/*   Updated: 2022/10/20 18:34:59 by analbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Compara hasta 'n' caracteres de 's1' y 's2'. No compara más alla de '\0'. 
 * Devuelve un int>0 si s1>s2, int<0 si s1<s2, o '0' si s1=s2*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	n = n - 1;
	while ((s1[i] != '\0' || s2[i] != '\0') && (n > 0))
	{
		if (s1[i] != s2[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
		n--;
	}
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}

/*int	main(void)
{
	char	s1[] = "hallo";
	char	s2[] = "hello";

	printf("%d", ft_strncmp(s1, s2, 2));
}*/
