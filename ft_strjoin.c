/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajoya-pi <ajoya-pi@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 14:31:27 by ajoya-pi          #+#    #+#             */
/*   Updated: 2023/09/22 15:57:04 by ajoya-pi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*total;
	unsigned int	i;
	unsigned int	size;
	unsigned int	size1;

	i = 0;
	size = ft_strlen(s1);
	size1 = ft_strlen(s2);
	total = (char *)malloc((size * sizeof(char)) + (size1 * sizeof(char)) + 1);
	if (total == NULL)
		return (NULL);
	while (i < size)
	{
		total[i] = s1[i];
		i++;
	}
	size = 0;
	while (size < size1)
	{
		total[i] = s2[size];
		i++;
		size++;
	}
	total[i] = '\0';
	return (total);
}
