/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analbarr <analbarr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 15:58:37 by analbarr          #+#    #+#             */
/*   Updated: 2022/10/25 15:57:31 by analbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Reserva un espacio en memoria para un num de objetos (count) de un tamaño de 
 * bytes (size) determinado para cada uno. Retorna un pointer a la memoria
 * reservada, que esta llena con bytes valor 0*/

void	*ft_calloc(size_t count, size_t size)
{
	void	*mem;

	if (count && ((SIZE_MAX / count) < size))
		return (NULL);
	mem = malloc (count * size);
	if (!mem)
		return (NULL);
	ft_bzero(mem, (count * size));
	return (mem);
}

/*int	main(void)
{
	printf("cadena: %p\n", ft_calloc(0, 1));
}*/
