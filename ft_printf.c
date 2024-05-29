/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labdello <labdello@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 19:57:23 by labdello          #+#    #+#             */
/*   Updated: 2024/05/29 18:52:33 by labdello         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_handle_str_convertion(char *str)
{
	size_t	len;

	len = ft_strlen(str);
	ft_putstr_fd(str, 1);
	return (len);
}

int	ft_handle_digit_convertion(int nbr)
{
	size_t	len;

	len = ft_nbrlen(nbr);
	ft_putnbr_fd(nbr, 1);
	return (len);
}

int	ft_printf(const char *format, ...)
{
	size_t	i;
	size_t	count;
	char	next_char;
	va_list	args;

	i = 0;
	count = 0;
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			ft_putchar_fd(format[i], 1);
			i++;
			count++;
			continue ;
		}
		next_char = format[++i];
		if (next_char == 'c')
		{
			ft_putchar_fd((int)va_arg(args, int), 1);
			count++;
		}
		else if (next_char == 'd')
			ft_handle_digit_convertion((int)va_arg(args, int));
		else if (next_char == 's')
			ft_handle_str_convertion((char *)va_arg(args, const char *));
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
