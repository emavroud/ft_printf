/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emavroud <emavroud@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 08:59:13 by emavroud          #+#    #+#             */
/*   Updated: 2022/05/20 13:57:04 by emavroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The SUBSTR function returns a portion of string,
// beginning at a specified character position,
// and a specified number of characters long.

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	if (start > ft_strlen(s))
	{
		str = malloc(1);
		str[0] = '\0';
		return (str);
	}
	str = malloc(len + 1);
	if (str == NULL)
		return (0);
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
