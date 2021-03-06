/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emavroud <emavroud@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 14:44:35 by emavroud          #+#    #+#             */
/*   Updated: 2022/05/20 13:57:19 by emavroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The strnstr() function locates the first occurrence  
// of the null-terminated string str1 in the string str2 ,
// where not more than len characters are searched.

#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*str2 == '\0' || str2 == NULL)
		return ((char *)str1);
	while (str1[i] != '\0' && i < len)
	{
		j = 0;
		while (str2[j] == str1[i + j] && i + j < len)
		{
			if (str2[j + 1] == '\0')
				return ((char *)str1 + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
