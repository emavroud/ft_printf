/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emavroud <emavroud@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 14:27:36 by emavroud          #+#    #+#             */
/*   Updated: 2022/03/30 14:27:36 by emavroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// the strncmp function returns a negative, zero,
// or positive integer depending on whether the first n characters of
// the object pointed to by s1 are less than, equal to,
// or greater than the first n characters of the object pointed to by s2. 

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (str1[i] != '\0' && str1[i] == str2[i] && i < n - 1)
		i++;
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
