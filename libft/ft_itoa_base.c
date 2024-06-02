/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labdello <labdello@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 08:10:41 by labdello          #+#    #+#             */
/*   Updated: 2024/05/21 14:16:06 by labdello         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

void	fill_nbr_base(int nbr, char *str, char *base)
{
	int				r;
	size_t			i;
	size_t			len;
	unsigned int	nb;

	i = 0;
	nb = ft_abs(nbr);
	len = ft_strlen(base);
	while (nb)
	{
		r = nb % len;
		str[i++] = base[r];
		nb = nb / len;
	}
	if (nbr < 0)
		str[i++] = '-';
	str[i] = '\0';
	ft_strrev(str);
}

char	*ft_itoa_base(int n, char *base)
{
	size_t	nbr_len;
	char	*str;

	nbr_len = ft_nbrlen(n);
	str = (char *) malloc(sizeof(char) * (nbr_len + 1));
	if (!str)
		return (NULL);
	fill_nbr_base(n, str, base);
	return (str);
}
