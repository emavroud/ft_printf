/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emavroud <emavroud@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 12:58:05 by emavroud          #+#    #+#             */
/*   Updated: 2022/03/30 12:58:05 by emavroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The isascii() function checks whether the argument 
// passed is an ascii character or not.

#include "libft.h"

int	ft_isascii(int i)
{
	if (i >= 0 && i <= 127)
		return (1);
	return (0);
}
