/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquintil <aquintil@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 07:34:22 by aquintil          #+#    #+#             */
/*   Updated: 2022/12/22 17:28:23 by aquintil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		pos;

	if (!*needle)
		return ((char *)haystack);
	pos = ft_strlen((char *)needle);
	while (*haystack && len >= pos)
	{
		if (*haystack == *needle && !ft_memcmp(haystack, needle, pos))
			return((char *)haystack);
		haystack++;
		len--;
	}
	return (0);
}
