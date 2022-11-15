/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquintil <aquintil@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 08:31:27 by aquintil          #+#    #+#             */
/*   Updated: 2022/11/15 09:15:55 by aquintil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>

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

void ft_fill()

/*
 	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb < 10)
	{
		ft_putchar(nb + 48);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}

 */


char	*ft_itoa(int nb)
{
	char *ptr;

	ptr = NULL;
	ptr = malloc((ft_size(nb) + 1) * sizeof(char));
	if (!ptr)
		return (0);

}


int	main()
{
	printf("%i\n", ft_count(-2147483648));
}
