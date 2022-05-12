/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emavroud <emavroud@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 12:52:01 by emavroud          #+#    #+#             */
/*   Updated: 2022/03/30 12:52:01 by emavroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The isdigit() function checks whether the argument passed 
// is an numeric character or not.

#include "libft.h"

int	ft_isdigit(int i)
{
	if (i >= '0' && i <= '9')
		return (1);
	return (0);
}
