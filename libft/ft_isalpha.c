/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emavroud <emavroud@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 12:42:14 by emavroud          #+#    #+#             */
/*   Updated: 2022/03/30 12:42:14 by emavroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The isalpha() function checks whether the argument 
// passed is an alphabetic character or not.

#include "libft.h"

int	ft_isalpha(int i)
{
	if ((i >= 'A' && i <= 'Z') || (i >= 'a' && i <= 'z'))
	{
		return (1);
	}
	return (0);
}
