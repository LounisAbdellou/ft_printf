/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labdello <labdello@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 17:40:36 by labdello          #+#    #+#             */
/*   Updated: 2024/05/31 18:44:27 by labdello         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include <stdint.h>
#include <stdio.h>
char hex_digit(int v) {
    if (v >= 0 && v < 10)
        return '0' + v;
    else
        return 'a' + v - 10; // <-- Here
}

void	ft_puthexa(void *ptr)
{
	int i;
    unsigned long int p;

	p = (unsigned long int)ptr;
    ft_putstr_fd("0x", 1);
    for(i = (sizeof(p) << 3) - 4; i>=0; i -= 4) {
        ft_putchar_fd(hex_digit((p >> i) & 0xf), 1);
    }
	ft_putchar_fd('\n', 1);
}

int main()
{
	char c = 'c';
	ft_puthexa(&c);
	printf("%p\n", &c);
}
