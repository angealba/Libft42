/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analbarr <analbarr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 19:32:58 by analbarr          #+#    #+#             */
/*   Updated: 2022/10/20 18:00:47 by analbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Borra n bytes partiendo de donde apunta 's' y añadiendo '0' a cambio. Usa 
 * memset usando '0' como el valor de entrada*/

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*int	main(void)
{
	size_t	n;
	char s[] = "hello";

	n = 3;
	ft_bzero(s, n);
	write(1, s, 5);
}*/
