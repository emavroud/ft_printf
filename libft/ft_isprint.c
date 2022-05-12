/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emavroud <emavroud@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 13:01:00 by emavroud          #+#    #+#             */
/*   Updated: 2022/03/30 13:01:00 by emavroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The isprint() function checks whether the argument passed
//  is an printable character (alphabet or number) or not.

#include "libft.h"

int	ft_isprint(int i)
{
	if (i >= 32 && i <= 126)
		return (1);
	return (0);
}
