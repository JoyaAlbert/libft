/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajoya-pi <ajoya-pi@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:39:34 by ajoya-pi          #+#    #+#             */
/*   Updated: 2023/09/20 16:39:55 by ajoya-pi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

#include "libft.h"
#include <stdio.h>

int	check(int nb)
{
	int	i;

	i = 1;
	if (nb == -2147483648)
		return (12);
	if (nb < 0)
		i++;
	while (nb / 10 != 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i + 1);
}

char	*ft_itoa(int nb)
{
	char	*a;
	int		i;

	i = check(nb);
	a = (char *)malloc(i * sizeof(char));
	if (a == NULL)
		return (NULL);
	if (nb == 0)
		return (a = "0\0");
	if (nb == -2147483648)
		return(a = "-2147483648\0");
	if (nb < 0 && nb != -2147483647)
	{
		a[0] = '-';
		nb = nb * (-1);
	}
	a[i - 1] = '\0';
	i--;
	while (nb != 0 && nb != -2147483648 && i != 0)
	{
		a[i - 1] = (nb % 10) + '0';
		nb = nb / 10;
		i--;
	}
	return (a);
}
