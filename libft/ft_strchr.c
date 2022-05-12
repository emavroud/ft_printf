/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emavroud <emavroud@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 13:37:22 by emavroud          #+#    #+#             */
/*   Updated: 2022/03/30 13:37:22 by emavroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The strchr() function finds the first occurrence
// of a character in a string.
// The character c can be the null character (\0);
// the ending null character of string is included in the search.

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str != c)
	{
		if (*str == 0)
		{
			return (NULL);
		}
		str++;
	}
	return ((char *)str);
}
