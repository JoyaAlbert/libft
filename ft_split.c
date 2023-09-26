/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajoya-pi <ajoya-pi@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:17:00 by ajoya-pi          #+#    #+#             */
/*   Updated: 2023/09/22 11:22:34 by ajoya-pi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**fillmatrix(char const *s, int *in, char **spl, int count)
{
	int	i;

	i = 1;
	ft_strlcpy(spl[0], (char *)s, in[0] + 1);
	while (i < count)
	{
		ft_strlcpy(spl[i], (char *)(s + (in[i -1] + 1)), ((in[i] - in[i -1])));
		i++;
	}
	return (spl);
}

int	freesplit(char **split, int i)
{
	if (split[i] == NULL)
	{
		while (i > 0)
		{
			free(split[i]);
			i--;
		}
		free(split);
		return (0);
	}
	return (1);
}

char	**allocate_matrix(char const *s, int *index, char **split, int count)
{
	int	i;
	int	tam;

	i = 0;
	tam = 0;
	split = (char **)malloc(count * sizeof(char));
	if (split == NULL)
		return (0);
	while (i < count)
	{
		if (i != 0)
			tam = (index[i] - index[i - 1]);
		else
			tam = index[i] + 1;
		split[i] = (char *)malloc((tam) * sizeof(char));
		if (freesplit(split, i) == 0)
			return (0);
		i++;
	}
	return (fillmatrix(s, index, split, count));
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
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		count;
	int		*index;
	int		i;
	char	**split;

	i = 0;
	count = 0;
	split = NULL;
	count = countwords(s, c);
	index = (int *)malloc((count + 1) * sizeof(int));
	count = 0;
	while ((char)s[i] != '\0')
	{
		if ((char)s[i] == c)
		{
			index[count] = i;
			count++;
		}
		i++;
	}
	count++;
	index[count - 1] = ft_strlen(s);
	split = allocate_matrix(s, index, split, count);
	return (split);
}
