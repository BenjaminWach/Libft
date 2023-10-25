/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwach <bwach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:10:26 by bwach             #+#    #+#             */
/*   Updated: 2023/10/24 21:11:37 by bwach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	size_t	i;
	size_t	sign;
	int		result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i])
	{
		while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
			i++;
		if (str[i] == '+' || str[i] == '-')
		{
			if (str[i] == '-')
				sign = -sign;
		}
		i++;
		while (ft_isdigit(str[i]))
		{
			result *= 10;
			result += str[i] - '0';
			i++;
		}
	}
	return (result * sign);
}