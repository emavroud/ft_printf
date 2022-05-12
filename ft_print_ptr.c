/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emavroud <emavroud@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 20:01:59 by emavroud          #+#    #+#             */
/*   Updated: 2022/05/12 11:16:00 by emavroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"
#include <stdint.h>

int	ft_get_ptr_len(uintptr_t num)
{
	int	i;

	i = 0;
	while (num != 0)
	{
		i++;
		num = num / 16;
	}
	return (i);
}

void	ft_put_ptr(uintptr_t num)
{
	if (num >= 16)
	{
		ft_put_ptr(num / 16);
		ft_put_ptr(num % 16);
	}
	else
	{
		if (num <= 9)
		{
			ft_putchar_fd((num + '0'), 1);
		}
		else
			ft_putchar_fd((num - 10 + 'a'), 1);
	}
}

int	ft_print_ptr(unsigned long ptr)
{
	int	length;

	length = 0;
	length = write(1, "0x", 2);
	if (ptr == 0)
		length += write(1, "0", 1);
	else
	{
		ft_put_ptr(ptr);
		length += ft_get_ptr_len(ptr);
	}
	return (ft_get_ptr_len);
}
