/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mianni <mianni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 13:14:01 by mianni            #+#    #+#             */
/*   Updated: 2024/06/05 15:58:10 by mianni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include <limits.h>
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int					ft_strlen(const char *base);

int					ft_printf(const char *type, ...);

int					ft_putchar(char c);

int					ft_putstr_printf(char *str);

int					ft_putnbr_print_int(int n, int len);

int					ft_putnbr_print_unsigned(unsigned int n, unsigned int len1);

unsigned long int	ft_putnbr_base(unsigned long int nbr, const char type);

int					ft_check(va_list argument, const char type);

unsigned long int	ft_print_hex(unsigned long int nbr, const char type);

#endif