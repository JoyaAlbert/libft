/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajoya-pi <ajoya-pi@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:50:14 by ajoya-pi          #+#    #+#             */
/*   Updated: 2023/09/15 16:54:48 by ajoya-pi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	int	i;
	int	j;

	j = 0;
	i = (int)len - 1;
	if (!dest && !src)
		return (dest);
	if (dest > src)
	{
		while (i >= 0)
		{
			*(char *)(dest + i) = *(char *)(src + i);
			i--;
		}
	}
	else
	{
		while (i >= 0)
		{
			*(char *)(dest + j) = *(char *)(src + j);
			i--;
			j++;
		}
	}
	return (dest);
}
