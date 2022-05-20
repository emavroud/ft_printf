/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emavroud <emavroud@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 11:09:07 by emavroud          #+#    #+#             */
/*   Updated: 2022/05/20 13:57:31 by emavroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The strlcpy() function returns the total length of
// the string that would have been copied if there was unlimited space.
// This might or might not be equal
// to the length of the string actually copied,
// depending on whether there was enough space.

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	if (!dstsize)
		return (ft_strlen(src));
	i = 0;
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
