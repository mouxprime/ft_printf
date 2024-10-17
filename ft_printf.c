/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mianni <mianni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 15:10:40 by mianni            #+#    #+#             */
/*   Updated: 2024/06/05 16:01:50 by mianni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check(va_list argument, const char type)
{
	int	len;

	len = 0;
	if (type == 'c')
		len += ft_putchar(va_arg(argument, int));
	else if (type == 's')
		len += ft_putstr_printf(va_arg(argument, char *));
	else if (type == 'p')
		len += ft_print_hex(va_arg(argument, unsigned long int), type);
	else if (type == 'i' || type == 'd')
		len += ft_putnbr_print_int(va_arg(argument, int), len);
	else if (type == 'u')
		len += ft_putnbr_print_unsigned(va_arg(argument, unsigned int), len);
	else if (type == 'x' || type == 'X')
		len += ft_print_hex(va_arg(argument, unsigned int), type);
	else if (type == '%')
		len += ft_putchar('%');
	return (len);
}

int	ft_printf(const char *type, ...)
{
	int	len;
	int	i;

	va_list(argument);
	i = 0;
	len = 0;
	va_start(argument, type);
	while (type[i])
	{
		if (type[i] == '%')
		{
			len += ft_check(argument, type[i + 1]);
			i++;
		}
		else
			len += ft_putchar(type[i]);
		i++;
	}
	va_end(argument);
	return (len);
}

/*int	main(void)
{
	char *str = NULL;
	int		i;
	ft_printf("%p\n");
	//i = ft_printf("%d\n", i);
	printf("%p");
}*/
