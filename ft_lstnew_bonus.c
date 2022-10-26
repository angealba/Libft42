/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analbarr <analbarr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:02:28 by analbarr          #+#    #+#             */
/*   Updated: 2022/10/20 19:51:45 by analbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Crea un nuevo nodo usando malloc. La variable 'content' se inicializa con el 
 * contenido del parametro content. La variable 'next' con Null-*/

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (0);
	new->content = (void *)content;
	new->next = NULL;
	return (new);
}

/*int	main(void)
{
	t_list	*l;

	l = ft_lstnew((void *)42);
	printf("%d", l->content); 
}*/
