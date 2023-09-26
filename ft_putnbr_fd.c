/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajoya-pi <ajoya-pi@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:09:03 by ajoya-pi          #+#    #+#             */
/*   Updated: 2023/09/25 13:40:12 by ajoya-pi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	checkdigits(int nb, int fd)
{
	int	i;

	i = 1;
	while (nb / 10 != 0)
	{
		nb = nb / 10;
		i++;
	}
	if (nb == 0)
		write(fd, "0", 1);
	return (i);
}

void	ft_putnbr_fd(int nb, int fd)
{
	char	a[11];
	int		i;
	int		j;

	i = checkdigits(nb, fd);
	j = i;
	if (nb == -2147483648)
		write (fd, "-2147483648", 11);
	if (nb < 0 && nb != -2147483648)
	{
		write (fd, "-", 1);
		nb = nb * (-1);
	}
	while (nb != 0 && nb != -2147483648)
	{
		a[i - 1] = (nb % 10) + '0';
		nb = nb / 10;
		i--;
	}
	a[j] = '\0';
	while (i < j)
	{
		write (fd, &a[i], 1);
		i++;
	}
}
