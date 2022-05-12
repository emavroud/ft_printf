/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emavroud <emavroud@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 11:08:35 by emavroud          #+#    #+#             */
/*   Updated: 2022/03/29 11:08:35 by emavroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The memmove function copies dstsize characters from the object
// pointed to by src into the object pointed to by dst.
// It returns a pointer to the destination.

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t dstsize)
{
	size_t				i;
	unsigned char		*ptr;
	const unsigned char	*ptr2;

	ptr = (unsigned char *)dst;
	ptr2 = (unsigned char *)src;
	i = 0;
	if (ptr2 < ptr)
		while (++i <= dstsize)
			ptr[dstsize - i] = ptr2[dstsize - i];
	else
		while (dstsize-- > 0)
			*(ptr++) = *(ptr2++);
	return (dst);
}
