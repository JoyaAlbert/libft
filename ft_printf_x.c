/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joya <joya@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 12:41:13 by ajoya-pi          #+#    #+#             */
/*   Updated: 2024/02/13 15:53:19 by joya             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*exceptionsx(unsigned int nb)
{
	if (nb == 0)
		return (ft_itoa(nb));
	else
		return (ft_itoa(10));
}

static int	checkx(unsigned int nb)
{
	int	i;

	i = 1;
	while (nb / 16 != 0)
	{
		nb = nb / 16;
		i++;
	}
	return (i + 1);
}

char	*itoax(unsigned int nb, char *base)
{
	char	*a;
	int		i;

	i = checkx(nb);
	a = (char *)malloc(i * sizeof(char));
	if (a == NULL)
		return (NULL);
	if (nb == 0 || nb == 16)
	{
		free(a);
		return (exceptionsx(nb));
	}
	a[i - 1] = '\0';
	i--;
	while (nb != 0)
	{
		a[i - 1] = base[nb % 16];
		nb = nb / 16;
		i--;
	}
	return (a);
}
