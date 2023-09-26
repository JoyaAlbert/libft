/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajoya-pi <ajoya-pi@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:42:24 by ajoya-pi          #+#    #+#             */
/*   Updated: 2023/09/15 16:54:01 by ajoya-pi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p;
	const unsigned char	*p1;

	p = (unsigned char *)s1;
	p1 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (n - 1 && *p1 == *p)
	{
		n--;
		p1++;
		p++;
	}
	return ((int)(*p - *p1));
}
