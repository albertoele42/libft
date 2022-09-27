/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquintil <aquintil@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 17:29:53 by aquintil          #+#    #+#             */
/*   Updated: 2022/09/22 17:29:57 by aquintil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	unsigned char	*str;

	str = b;
	i = 0;
	while (i <= len)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (b);
}