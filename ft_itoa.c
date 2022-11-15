/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquintil <aquintil@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 08:31:27 by aquintil          #+#    #+#             */
/*   Updated: 2022/11/15 10:02:05 by aquintil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int ft_size(int nb)
{
	int i;

	i = 0;
	if (nb == -2147483648)
		return (i + 11); 
	while (nb)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

void	ft_putnbr(char *ptr, int nb, int size)
{
	ptr[size] = '\0';
	if (nb < 0)
	{
		ptr[--size] = '-';
		nb *= -1;
	}
	while (size >= 0)
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
	if (nb == -2147483648)
		ptr = "-214783648";
	else
		ft_putnbr(ptr, nb, size);
	return (ptr);
}

int	main()
{
	printf("%s\n", ft_itoa(-2147489));
}
