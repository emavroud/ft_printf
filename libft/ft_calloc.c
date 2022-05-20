/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emavroud <emavroud@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 17:57:26 by emavroud          #+#    #+#             */
/*   Updated: 2022/05/20 13:58:20 by emavroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The calloc() in C is a function used to allocate
// multiple blocks of memory having the same size.
// It is a dynamic memory allocation function that
// allocates the memory space to complex data
// structures such as arrays and structures
// and returns a void pointer to the memory.

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (ptr == NULL)
		return (ptr);
	ft_bzero(ptr, size * count);
	return (ptr);
}
