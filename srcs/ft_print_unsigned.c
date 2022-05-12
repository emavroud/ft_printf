/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emavroud <emavroud@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 09:54:18 by emavroud          #+#    #+#             */
/*   Updated: 2022/05/12 10:13:19 by emavroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

int	ft_get_num_len(unsigned int num)
{
	int	i;

	i = 0;
	while(num != 0)
	{
		num++;
		num = num / 10;
	}
	return (i);
}
char	*ft_uitoa(unsigned int n)
{
	char	*num;
	int		len;

	len = ft_get_num_len;
	num = (char *)malloc(sizeof(char) * (len + 1));
	if (!num)
		return(0);
	num[len] = '\0';
	while(n != 0)
	{
		num[len - 1] = n % 10 + 48;
		n = n / 10;
		len--;
	}
	return(num);
}
int	ft_print_unsigned(unsigned int n)
{
	int		print_len;
	char	*num;

	print_len = 0;
	if (n == 0)
		print_len += write(1, "0", 1);
	else
	{
		num = ft_uitoa(n);
		print_len += ft_putstr(num);
		free(num);
	}
	return (print_len);
}
