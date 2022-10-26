/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analbarr <analbarr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 13:38:36 by analbarr          #+#    #+#             */
/*   Updated: 2022/10/20 20:07:15 by analbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Itera la lista 'lst' y aplica la función 'f' al contenido de cada nodo. 
 *Crea una lista resultante de la aplicación correcta y sucesiva de la función
’f’ sobre cada nodo. La función ’del’ se utiliza para eliminar el contenido de
un nodo, si hace falta. Devuelve la nueva lista o NULL si falla la memoria*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first;
	t_list	*aux;
	t_list	*new_node;

	if (!lst || !f)
		return (0);
	first = ft_lstnew(f(lst->content));
	if (!first)
		return (0);
	aux = first;
	lst = lst->next;
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (!new_node)
		{
			ft_lstclear(&first, del);
			return (0);
		}
		aux->next = new_node;
		aux = new_node;
		lst = lst->next;
	}
	return (first);
}
