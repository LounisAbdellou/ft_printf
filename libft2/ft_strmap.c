/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labdello <labdello@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 10:49:59 by labdello          #+#    #+#             */
/*   Updated: 2024/04/17 14:58:11 by labdello         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	char	*mapped_str;

	i = 0;
	if (!s || !f)
		return (NULL);
	mapped_str = (char *) malloc(sizeof(char) * (ft_strlen((char *)s) + 1));
	if (!mapped_str)
		return (NULL);
	mapped_str[ft_strlen((char *)s)] = '\0';
	while (s[i] != '\0')
	{
		mapped_str[i] = (*f)(s[i]);
		i++;
	}
	return (mapped_str);
}
