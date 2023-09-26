/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajoya-pi <ajoya-pi@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:09:13 by ajoya-pi          #+#    #+#             */
/*   Updated: 2023/09/18 11:53:30 by ajoya-pi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*aux;
	int		i;
	int		j;

	i = 0;
	j = ft_strlen(s1);
	while (s1[i] != '\0')
	{
		if (ft_strchr(set, s1[i]) == NULL)
			break ;
		i++;
	}
	while (j > i)
	{
		if (ft_strchr(set, s1[j - 1]) == NULL)
			break ;
		j--;
	}
	aux = (char *)malloc(j - i + 1); //+1
	if (aux == NULL)
		return (NULL);
	ft_strlcpy(aux, (char *)(s1 + i), (j - i) + 1);
	return (aux);
}
