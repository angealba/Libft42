/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analbarr <analbarr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 15:36:09 by analbarr          #+#    #+#             */
/*   Updated: 2022/10/20 17:47:08 by analbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Escribe un valor particular 'c' en 'len' bytes del string 'b'.*/

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = c;
		i++;
	}
	return (b);
}

/*int	main(void)
{
	char	b[] = "ordenadorrrrrrrrrrrr";
	int	c;
	size_t	len;

	c = 'z';
	len = 3;
	printf("%s", ft_memset(b, c, len));
}*/
