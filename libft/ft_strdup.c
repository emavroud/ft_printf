/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emavroud <emavroud@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 17:59:16 by emavroud          #+#    #+#             */
/*   Updated: 2022/03/30 17:59:16 by emavroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The strdup() function shall return a pointer to a new string,
// which is a duplicate of the string pointed to by s.
// The returned pointer can be passed to free()
// A null pointer is returned if the new string cannot be created.

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	int		len;
	char	*ptr;

	i = 0;
	len = ft_strlen(src);
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (!(ptr))
		return (NULL);
	while (i < len)
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
