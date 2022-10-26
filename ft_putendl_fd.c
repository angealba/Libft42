/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analbarr <analbarr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 18:02:48 by analbarr          #+#    #+#             */
/*   Updated: 2022/10/20 19:43:05 by analbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Envía la string ’s’ al file descriptor dado, seguido de un salto de línea.*/

void	ft_putendl_fd(char *s, int fd)
{
	if (s)
	{
		ft_putstr_fd(s, fd);
		write(fd, "\n", 1);
	}
}

/*int	main(void)
{
	char	s[] = "hola";
	int		fd;

	fd = 1;
	ft_putendl_fd(s, fd);
	return (0);
}*/
