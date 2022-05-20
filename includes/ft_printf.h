/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emavroud <emavroud@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 01:30:52 by emavroud          #+#    #+#             */
/*   Updated: 2022/05/20 12:56:04 by emavroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdint.h>

int		ft_get_hex_len(unsigned int num);
void	ft_put_hex(unsigned int num, const char format);
int		ft_print_hex(unsigned int num, const char format);

int		ft_get_ptr_len(uintptr_t num);
void	ft_put_ptr(uintptr_t num);
int		ft_print_ptr(unsigned long ptr);

int		ft_get_num_len(unsigned int num);
char	*ft_uitoa(unsigned int n);
int		ft_print_unsigned(unsigned int n);

int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_printnbr(int n);
int	ft_printperc(void);

int	ft_formats(va_list args, const char format);
int ft_printf(const char *str, ...);

#endif
