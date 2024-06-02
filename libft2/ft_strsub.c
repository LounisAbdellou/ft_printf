/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labdello <labdello@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 14:53:13 by labdello          #+#    #+#             */
/*   Updated: 2024/04/21 01:03:26 by labdello         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	if (!s)
		return (NULL);
	else if (start >= ft_strlen((char *)s))
		return (ft_strnew(0));
	str = ft_strnew(len);
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	return (str);
}
