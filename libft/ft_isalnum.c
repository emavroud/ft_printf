/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emavroud <emavroud@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 12:54:26 by emavroud          #+#    #+#             */
/*   Updated: 2022/05/20 13:58:17 by emavroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The isalnum() function checks whether the argument 
// passed is an alphanumeric character (alphabet or number) or not.

#include "libft.h"

int	ft_isalnum(int i)
{
	if ((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z')
		|| (i >= '0' && i <= '9'))
		return (1);
	return (0);
}
