/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labdello <labdello@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 00:11:11 by labdello          #+#    #+#             */
/*   Updated: 2024/04/17 15:35:36 by labdello         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_word_count(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
		else
			i++;
	}
	return (count);
}

char	**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	tab_i;
	size_t	flag;
	char	**tab;

	i = 0;
	tab_i = 0;
	tab = (char **) malloc(sizeof(char *) * (get_word_count(s, c) + 1));
	if (!tab || !s)
		return (NULL);
	tab[get_word_count(s, c)] = NULL;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			flag = i;
			while (s[i] != c && s[i] != '\0')
				i++;
			tab[tab_i] = ft_strndup(s + flag, i - flag);
			tab_i++;
		}
		else
			i++;
	}
	return (tab);
}
