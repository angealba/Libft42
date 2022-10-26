/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analbarr <analbarr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 19:56:50 by analbarr          #+#    #+#             */
/*   Updated: 2022/10/20 19:38:32 by analbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Aplica la funcion 'f' a cada caracter del string 's'. Genera un nuevo string
 * con el resultado del uso sucesivo de 'f'.*/

/*char    mapi(unsigned int i, char c)
{
    static int indexArray[11] = {0};
    indexArray[i] = 1;
    if (c >= 'a' && c <= 'z')
        return (c - 32);
    else if (c >= 'A' && c <= 'Z')
        return (c + 32);
    else
        return (c);
}*/

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	char	*str;
	int		len;
	int		i;

	i = 0;
	if (!s)
		return (0);
	len = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	while (i < len)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*int	main(void)
{
	char	s[] = "HELLO";

	printf("%s", ft_strmapi(s, &mapi));
	return (0);
}*/
