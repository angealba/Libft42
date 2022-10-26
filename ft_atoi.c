/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analbarr <analbarr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 20:38:39 by analbarr          #+#    #+#             */
/*   Updated: 2022/10/20 18:49:39 by analbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

/*Convierte un string en un int*/

int	ft_atoi(const char *str)
{
	int				i;
	unsigned long	num;
	int				sign;

	i = 0;
	sign = 1;
	while (str[i] != '\0' && (str[i] == 32 || (str[i] >= 9 && str[i] <= 13)))
		i++;
	if (str[i] != '\0' && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	num = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (num * 10) + str[i] - '0';
		if (num > 9223372036854775808UL && sign < 0)
			return (0);
		if (num > 9223372036854775808UL && sign > 0)
			return (-1);
		i++;
	}
	return (sign * num);
}

/*int	main(void)
{
	char	str[] = " -1236";

	printf("%d\n", ft_atoi(str));
}*/
