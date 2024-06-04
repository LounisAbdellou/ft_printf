/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labdello <labdello@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 19:57:23 by labdello          #+#    #+#             */
/*   Updated: 2024/06/04 19:32:38 by labdello         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_handle_str(char *str)
{
	size_t	len;

	len = ft_strlen(str);
	ft_putstr_fd(str, 1);
	return (len);
}

int	ft_handle_digit(int nbr)
{
	size_t	len;

	len = ft_nbrlen(nbr);
	ft_putnbr_fd(nbr, 1);
	return (len);
}

int	ft_handle_unsigned(unsigned int nbr)
{
	size_t	len;

	len = ft_unbrlen(nbr);
	ft_putunbr_fd(nbr, 1);
	return (len);
}

int ft_handle_hex(unsigned long long hex, char convertion)
{
	size_t  len;

	len = ft_hexlen(hex);
	if (convertion == 'p')
	{
		ft_putstr_fd("0x", 1);
		len += 2;
	}
	ft_puthex_fd(hex, ft_isupper(convertion), 1);
	return (len);
}

void	ft_display(va_list args, size_t *count, char convertion)
{
	if (convertion == '%')
	{
		ft_putchar_fd('%', 1);
		*count += 1;
	}
	else if (convertion == 'c')
	{
		ft_putchar_fd(va_arg(args, int), 1);
		*count += 1;
	}
	else if (convertion == 'd' || convertion == 'i')
		*count += ft_handle_digit(va_arg(args, int));
	else if (convertion == 'u')
		*count += ft_handle_unsigned(va_arg(args, unsigned int));
	else if (convertion == 's')
		*count += ft_handle_str(va_arg(args, char *));
	else if (convertion == 'x' || convertion == 'X' || convertion == 'p')
		*count += ft_handle_hex(va_arg(args, unsigned long long), convertion);
}

int	ft_printf(const char *format, ...)
{
	size_t	i;
	size_t	count;
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
		ft_display(args, &count, format[++i]);
		i++;
	}
	va_end(args);
	return (count);
}
