/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajoya-pi <ajoya-pi@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:55:48 by ajoya-pi          #+#    #+#             */
/*   Updated: 2023/09/15 16:52:12 by ajoya-pi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;

	p = (unsigned char *)s;
	while (n != 0)
	{
		if ((unsigned char)c == *p)
			return ((void *)p);
		p++;
		n--;
	}
	return (NULL);
}
