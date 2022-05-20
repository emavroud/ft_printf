/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emavroud <emavroud@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 15:03:47 by emavroud          #+#    #+#             */
/*   Updated: 2022/05/20 13:58:23 by emavroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The atoi() function converts a character string to an integer value.
// The input string is a sequence of characters that can be interpreted
// as a numeric value of the specified return type.
// The function stops reading the input string at the first character 
// that it cannot recognize as part of a number.
// This character can be the null character that ends the string. 

#include "libft.h"

int	ft_atoi(char *str)
{
	int		sign;
	int		res;
	int		i;

	res = 0;
	sign = 1;
	i = 0;
	while (str[i] && (str[i] == '\f' || str[i] == '\t' || str[i] == ' '
			|| str[i] == '\n' || str[i] == '\r' || str[i] == '\v'))
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign = -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res *= 10;
		res += str[i++] - '0';
	}
	res *= sign;
	return (res);
}
