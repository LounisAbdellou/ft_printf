/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labdello <labdello@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 19:57:23 by labdello          #+#    #+#             */
/*   Updated: 2024/04/18 22:39:48 by labdello         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
// #include "libft.h"

int	ft_printf(const char *format, ...)
{
	(void)format;
	return (0);
}

#include <stdio.h>
int main()
{
	ft_putchar('c');
	printf("%s\n", "test42");
	ft_printf("%s\n", "test42");
	return (0);
}
