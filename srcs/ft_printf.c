/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emavroud <emavroud@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 08:50:52 by emavroud          #+#    #+#             */
/*   Updated: 2022/04/22 08:50:52 by emavroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"
#include <stdarg.h>

int	ft_formats(va_list args, const char format)
{
	int	length;

	length = 0;
	if (format == 'c')
		length += ft_putchar_fd(va_arg(args, int), 1);
	else if (format == 's')
		length += ft_putnbr_fd(va_arg(args, char *), 1);
	else if (format == 'p')
		length +=
	else if (format == 'd' || format == 'i')
		length +=
	else if (format == 'u')
		length +=
	else if (format == 'x' || format == 'X')
		length += ft_print_hex(va_arg(args, unsigned int), format);
	else if (format == '%')
		length +=
}

int ft_printf(const char *str, ...)
{
	int		i;
	va_list args;
	int		length;

	i = 0;
	length = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			length += ft_formats(args, str[i + 1]);
			i++;
		}
		else
			length += ft_putchar_fd(str[i], 1);
		i++;
	}
	va_end(args);
	return (length);
}
