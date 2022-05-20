/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emavroud <emavroud@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 09:22:48 by emavroud          #+#    #+#             */
/*   Updated: 2022/05/20 13:57:09 by emavroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// StrTrim: Remove Leading/Trailing Whitespace From A String

#include "libft.h"

static int	ft_trim(char const s, char const *set)

{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == s)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	s;
	size_t	e;

	s = 0;
	while (s1[s] && ft_trim(s1[s], set))
		s++;
	e = ft_strlen(s1);
	while (e > s && ft_trim(s1[e - 1], set))
		e--;
	str = malloc(e - s + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s < e)
	{
		str[i++] = s1[s++];
	}
	str[i] = '\0';
	return (str);
}
