/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labdello <labdello@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 19:57:23 by labdello          #+#    #+#             */
/*   Updated: 2024/04/23 23:01:34 by labdello         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	size_t	i;
	char	next_char;
	va_list	args;

	i = 0;
	next_char = '\0';
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			ft_putchar(format[i]);
			i++;
			continue ;
		}
		next_char = format[++i];
		if (next_char == 'c')
			ft_putchar((int)va_arg(args, int));
		else if (next_char == 'd')
			ft_putchar((int)va_arg(args, int));
		else if (next_char == 's')
			ft_putstr((char *)va_arg(args, const char *));
		i++;
	}
	va_end(args);
	return (0);
}

#include <stdio.h>
int main()
{
	// ft_putchar('c');
	// printf("%s\n", "test42");
	// ft_printf("%s\n", "test42");
	ft_printf("%c => .\n", 'c');
	return (0);
}
