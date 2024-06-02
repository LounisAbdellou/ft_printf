/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labdello <labdello@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 16:23:39 by labdello          #+#    #+#             */
/*   Updated: 2024/04/07 14:41:35 by labdello         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *str, char *needle)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (ft_strlen(needle) < 1)
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0' && str[i + j] == needle[j])
			j++;
		if (j == ft_strlen(needle))
			return (str + i);
		i++;
	}
	return (NULL);
}
