/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labdello <labdello@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 19:57:23 by labdello          #+#    #+#             */
/*   Updated: 2024/05/25 14:41:39 by labdello         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	size_t	i;
	size_t	count;
	char	next_char;
	va_list	args;

	i = 0;
	count = 0;
	next_char = '\0';
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			ft_putchar(format[i]);
			i++;
			count++;
			continue ;
		}
		next_char = format[++i];
		if (next_char == 'c')
		{
			ft_putchar((int)va_arg(args, int));
			count++;
		}
		else if (next_char == 'd')
		{
			ft_putnbr((int)va_arg(args, int));
			// count += ft_nbrlen((int)va_arg(args, int));
		}
		else if (next_char == 's')
		{
			ft_putstr((char *)va_arg(args, const char *));
			// count += ft_strlen((const char *)va_arg(args, const char *));
		}
		i++;
	}
	va_end(args);
	return (count);
}
//
// #include <stdio.h>
// int main()
// {
// 	ft_printf(" %s\n", "test");
// 	return (0);
// }
