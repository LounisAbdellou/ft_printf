/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labdello <labdello@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 15:41:58 by labdello          #+#    #+#             */
/*   Updated: 2024/04/14 13:23:13 by labdello         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*mem_ptr;

	mem_ptr = malloc(size);
	if (!mem_ptr)
		return (NULL);
	ft_bzero(mem_ptr, size);
	return (mem_ptr);
}
