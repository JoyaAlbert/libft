/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajoya-pi <ajoya-pi@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:50:00 by ajoya-pi          #+#    #+#             */
/*   Updated: 2023/09/22 14:37:01 by ajoya-pi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *hay, const char *needle, size_t len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (needle[0] == '\0')
		return ((char *)hay);
	else if (len == 0)
		return (NULL);
	while (hay[i] != '\0' && ((size_t)i < len))
	{
		j = 0;
		while (hay[i + j] == needle[j] && hay[i + j] != '\0'
			&& i + j < (int)len)
			j++;
		if (needle[j] == '\0')
			return ((char *)hay + i);
		i++;
	}
	return (0);
}
