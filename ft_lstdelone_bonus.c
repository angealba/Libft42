/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analbarr <analbarr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 19:58:01 by analbarr          #+#    #+#             */
/*   Updated: 2022/10/20 20:00:40 by analbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Toma como parámetro un nodo ’lst’ y libera la memoria del contenido 
 * utilizando la función ’del’ dada como parámetro, además de liberar el nodo.
 * La memoria de ’next’ no debe liberarse.*/

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst && del)
	{
		del(lst->content);
		free(lst);
	}
}
