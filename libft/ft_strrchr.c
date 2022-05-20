/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emavroud <emavroud@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 13:48:09 by emavroud          #+#    #+#             */
/*   Updated: 2022/05/20 13:57:15 by emavroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The strrchr() function locates the last occurrence of a character in a string
// It returns a pointer to the last occurrence in the string.

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;

	i = ft_strlen(str);
	while (i > 0)
	{
		if (str[i] == (char)c)
			return ((char *)str + i);
		i--;
	}
	if (str[i] == (char)c)
		return ((char *)str);
	return (0);
}
