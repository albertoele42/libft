/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquintil <aquintil@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 08:31:27 by aquintil          #+#    #+#             */
/*   Updated: 2022/11/16 08:05:22 by aquintil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_size(int nb)
{
	int	i;

	i = 0;
	if (nb == -2147483648)
		return (i + 11);
	if (nb == 0)
		return (i + 1);
	if (nb < 0)
		i++;
	while (nb)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

void	ft_putnbr(char *ptr, int nb, int size)
{
	int	limit;

	limit = 0;
	ptr[size] = '\0';
	if (nb == -2147483648)
	{
		ptr[limit++] = '-';
		ptr[limit++] = '2';
		nb = 147483648;
	}
	if (nb < 0)
	{
		ptr[limit++] = '-';
		nb *= -1;
	}
	while (size > limit)
	{
		ptr[--size] = nb % 10 + 48;
		nb /= 10;
	}
}

char	*ft_itoa(int nb)
{
	char	*ptr;
	int		size;

	size = ft_size(nb);
	ptr = NULL;
	ptr = malloc((size + 1) * sizeof(char));
	if (!ptr)
		return (0);
	ft_putnbr(ptr, nb, size);
	return (ptr);
}
