/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analbarr <analbarr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:12:03 by analbarr          #+#    #+#             */
/*   Updated: 2022/10/20 19:31:31 by analbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Recibe un int y lo transforma en char, usando malloc. Los num negativos deben
 * gestionarse.*/

static unsigned int	ft_num_len(int n)
{
	unsigned int	len;

	len = 0;
	if (n == 0)
		len = 1;
	if (n < 0)
		len = len + 1;
	while (n != 0)
	{
		n = (n / 10);
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	num;
	unsigned int	len;

	len = ft_num_len(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	if (n < 0)
	{
		str[0] = '-';
		num = -n;
	}
	else
		num = n;
	if (num == 0)
		str[0] = '0';
	str[len] = '\0';
	while (num != 0)
	{
		str[len - 1] = (num % 10) + '0';
		num = num / 10;
		len--;
	}
	return (str);
}

/*int	main(void)
{
	int	n;

	n = -214700;
	printf("num: %s", ft_itoa(n));
}*/
