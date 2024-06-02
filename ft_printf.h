/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labdello <labdello@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 22:16:35 by labdello          #+#    #+#             */
/*   Updated: 2024/06/02 19:22:32 by labdello         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <stdarg.h>

void	ft_putunbr_fd(unsigned int nbr, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(const char *str, int fd);
void	ft_putnbr_fd(int nbr, int fd);
void	ft_puthex_fd(unsigned int hex, int capitilize, int fd);
size_t	ft_nbrlen(int nbr);
size_t	ft_unbrlen(unsigned int nbr);
size_t	ft_strlen(const char *str);
size_t	ft_hexlen(unsigned int hex);
int		ft_printf(const char *format, ...);

#endif
