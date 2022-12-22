/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquintil <aquintil@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 17:30:46 by aquintil          #+#    #+#             */
/*   Updated: 2022/12/22 18:31:48 by aquintil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*s1;
	const char	*s2;

	s1 = dest;
	s2 = src;
	if (s2 >= s1)
		return (ft_memcpy(s1, s2, n));
	while (n--)
		s1[n] = s2[n];
	return (dest);
}
