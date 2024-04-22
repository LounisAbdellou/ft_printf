/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labdello <labdello@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 19:57:23 by labdello          #+#    #+#             */
/*   Updated: 2024/04/21 17:42:49 by labdello         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	get_arg_count(const char *format)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	return (count);
}

int	ft_printf(const char *format, ...)
{
	(void)format;
	va_list	args;
	size_t	arg_count;

	arg_count = get_arg_count(format);
	return (0);
}

#include <stdio.h>
int main()
{
	ft_putchar('c');
	printf("%s\n", "test42", "test");
	ft_printf("%s\n", "test42");
	return (0);
}
