/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emavroud <emavroud@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 14:57:36 by emavroud          #+#    #+#             */
/*   Updated: 2022/03/28 14:57:36 by emavroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The bzero function can be used to erase 
// the given memory area with zero bytes

#include "libft.h"

void	ft_bzero(void *str, size_t len)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)str;
	while (len-- > 0)
	{
		*ptr = 0;
		ptr++;
	}
}
