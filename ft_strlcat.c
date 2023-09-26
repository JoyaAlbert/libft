/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajoya-pi <ajoya-pi@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:18:50 by ajoya-pi          #+#    #+#             */
/*   Updated: 2023/09/13 14:40:06 by ajoya-pi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0' && i < size)
		i++;
	j = i;
	while (src[i - j] != '\0' && i + 1 < size)
	{
		dest[i] = src[i - j];
		i++;
	}
	if (j < i)
		dest[i] = '\0';
	return (j + ft_strlen(src));
}
