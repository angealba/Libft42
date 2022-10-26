/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analbarr <analbarr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:50:33 by analbarr          #+#    #+#             */
/*   Updated: 2022/10/20 19:38:28 by analbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Se aplica a cada caracter de 's' la funcion 'f' con parametros de entrada i
 * y &i, que podrá modificarese si es necesario*/

/*char	*striteri(unsigned int i, char *s)
{
	static int indexArray[11] = {0};
	indexArray[i] = 1;
	
	if ((s[i] >= 'a') && (s[i] <= 'z'))
		return (s[i] - 32);
	else if ((s[i] >= 'A') && (s[i] <= 'Z'))
		return (s[i] + 32);
	else
		return (s[i]);
}*/

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (s)
	{
		while (s[i] != '\0')
		{
			f(i, s + i);
			i++;
		}
	}	
}

/*int	main(void)
{
	char s[] = "HELLO";
	
	printf("%s", (char) ft_striteri(s, &striteri));
}*/
