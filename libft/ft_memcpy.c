/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emavroud <emavroud@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 17:03:42 by emavroud          #+#    #+#             */
/*   Updated: 2022/05/20 13:58:02 by emavroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The function memcpy() is used to copy
// a memory block from one location to another.
// One is source and another is destination pointed by the pointer.

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t dstsize)
{
	unsigned char		*ptr;
	const unsigned char	*ptr2;

	ptr = (unsigned char *)dst;
	ptr2 = (unsigned char *)src;
	while (dstsize-- > 0)
		*(ptr++) = *(ptr2++);
	return (dst);
}
