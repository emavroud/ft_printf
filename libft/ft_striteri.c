/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emavroud <emavroud@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 14:37:24 by emavroud          #+#    #+#             */
/*   Updated: 2022/05/20 13:57:39 by emavroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Applies the function ’f’ on each character of
// the string passed as argument, passing its index
// as first argument. Each character is passed by
// address to ’f’ to be modified if necessary.

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	if (s != NULL && f != NULL)
	{
		while (s[i] != '\0')
		{
			f(i, &s[i]);
			i++;
		}
	}
}
