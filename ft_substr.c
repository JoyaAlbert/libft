/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajoya-pi <ajoya-pi@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 14:00:58 by ajoya-pi          #+#    #+#             */
/*   Updated: 2023/09/25 13:46:35 by ajoya-pi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	int				i;

	if (s == NULL)
		return (NULL);
	if (ft_strlen(s) < start)
	{
		sub = (char *)malloc (sizeof(char));
		if (sub == NULL)
			return (NULL);
		*sub = '\0';
		return (sub);
	}
	if (ft_strlen(s) - start > len)
		i = len + 1;
	else
		i = ft_strlen(s) - start + 1;
	sub = (char *)malloc(i * sizeof(char));
	if (sub == NULL)
		return (NULL);
	ft_strlcpy(sub, (char *)s + start, i);
	return (sub);
}
