/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajoya-pi <ajoya-pi@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:18:19 by ajoya-pi          #+#    #+#             */
/*   Updated: 2023/09/13 14:41:41 by ajoya-pi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (ft_strlen(s1) == 0 && ft_strlen(s2) == 0)
		return (0);
	if (n < 1)
		return (0);
	n--;
	while ((i < n) && (s1[i] == s2[i]) && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (((unsigned char)s1[i] - (unsigned char)s2[i]));
}
