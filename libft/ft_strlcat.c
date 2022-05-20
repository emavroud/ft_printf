/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emavroud <emavroud@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 11:11:57 by emavroud          #+#    #+#             */
/*   Updated: 2022/05/20 13:57:33 by emavroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The strlcat() function returns the combined length of both
// src and dst strings (not counting their terminating null characters).
// This result is used to determine whether the final string was truncated

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	res;

	i = ft_strlen(dst);
	j = 0;
	res = 0;
	while (src[res] != '\0')
		res++;
	if (dstsize <= i)
	{
		return (res + dstsize);
	}
	else
		res = res + i;
	while (src[j] != '\0' && i + 1 < dstsize)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (res);
}
