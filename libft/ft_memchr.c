/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emavroud <emavroud@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 14:36:30 by emavroud          #+#    #+#             */
/*   Updated: 2022/05/20 13:58:06 by emavroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The memchr function returns a pointer
// to the first occurrence of the character c within the first n characters
// of the object pointed to by s. 
// If c isn't found, it returns a null pointer.

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	character;

	ptr = (unsigned char *)s;
	character = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (*ptr == character)
			return (ptr);
		ptr++;
		i++;
	}
	return (NULL);
}
