/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajoya-pi <ajoya-pi@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:17:00 by ajoya-pi          #+#    #+#             */
/*   Updated: 2023/09/27 17:11:30 by ajoya-pi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strndup(const char *s1, int n)
{
	char	*s2;
	size_t	i;

	i = 0;
	s2 = (char *)malloc(sizeof(char) * n);
	if (s2 == NULL)
		return (NULL);
	ft_strlcpy(s2, (char *)s1, n);
	return (s2);
}

int	countwords(char const *s, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while ((char)s[i] != '\0')
	{
		if ((char)s[i] == c)
		{
			while ((char)s[i] == c)
				i++;
			count++;
			i--;
		}
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**split;

	i = 0;
	k = 0;
	split = (char **)malloc((countwords(s, c) + 1) * sizeof(char *));
	if (split == NULL)
		return (0);
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] != '\0' && s[i] != c)
			i++;
		if (i > j)
		{
			split[k] = ft_strndup(s + j, i - j + 1);
			k++;
		}
	}
	split[k] = NULL;
	return (split);
}
