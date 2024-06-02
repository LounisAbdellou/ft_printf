/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labdello <labdello@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 19:11:42 by labdello          #+#    #+#             */
/*   Updated: 2024/06/02 19:21:39 by labdello         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_puthex_fd(unsigned int hex, int capitilize, int fd)
{
	if (hex >= 16)
	{
		ft_puthex_fd(hex / 16, capitilize, fd);
		ft_puthex_fd(hex % 16, capitilize, fd);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd(hex + 48, fd);
		else
		{
			if (capitilize)
				ft_putchar_fd(hex + 65, fd);
			else
				ft_putchar_fd(hex + 97, fd);
		}
	}
}
