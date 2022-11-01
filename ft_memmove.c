/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquintil <aquintil@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 17:30:46 by aquintil          #+#    #+#             */
/*   Updated: 2022/11/01 09:03:54 by aquintil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*s1;
	const char	*s2;

	s1 = dst;
	s2 = src;
	if (s2 >= s1)
		return (ft_memcpy(s1, s2, len));
	while (len--)
		s1[len] = s2[len];
	return (dst);
}
