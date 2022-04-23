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
#include <stdarg.h>

static int ft_putchar(int c)
{
	write(1, &c, 1);
}

int ft_printf(const char *fmt, ...)
{
	int		i;
	int		fd;
	char	c;

	while (c = fmt)
	{
		if (c != '%')
		{
			ft_putchar_fd(c, fd);
		}
		c++;
	}
}
