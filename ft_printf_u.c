/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joya <joya@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:34:45 by ajoya-pi          #+#    #+#             */
/*   Updated: 2024/02/13 15:53:13 by joya             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	checku(unsigned int nb)
{
	int	i;

	i = 1;
	while (nb / 10 != 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i + 1);
}

static char	*exceptionsu(unsigned int nb, int i, char *a)
{
	if (nb == 0)
	{
		ft_strlcpy(a, "0", i);
		return (a);
	}
	return (NULL);
}

char	*ft_utoa(unsigned int nb)
{
	char	*a;
	int		i;

	i = checku(nb);
	a = (char *)malloc(i * sizeof(char));
	if (a == NULL)
		return (NULL);
	if (nb == 0)
		return (exceptionsu(nb, i, a));
	a[i - 1] = '\0';
	i--;
	while (nb != 0 && i != 0)
	{
		a[i - 1] = (nb % 10) + '0';
		nb = nb / 10;
		i--;
	}
	return (a);
}
