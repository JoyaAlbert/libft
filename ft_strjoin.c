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
	char			*tot;
	unsigned int	i;
	unsigned int	tam;
	unsigned int	tam1;

	i = 0;
	tam = ft_strlen(s1);
	tam1 = ft_strlen(s2);
	tot = (char *)malloc((tam * sizeof(char)) + (tam1 * sizeof(char)) + 1);
	if (tot == NULL)
		return (NULL);
	while (i < tam)
	{
		tot[i] = s1[i];
		i++;
	}
	tam = 0;
	while (tam < tam1)
	{
		tot[i] = s2[tam];
		i++;
		tam++;
	}
	tot[i] = '\0';
	return (tot);
}
