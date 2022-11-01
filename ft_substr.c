/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquintil <aquintil@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 07:51:14 by aquintil          #+#    #+#             */
/*   Updated: 2022/11/01 10:17:49 by aquintil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = NULL;
	ptr = malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (0);
	if ((size_t)ft_strlen((char *)s) >= start)
	{
		while (i < len)
		{
			ptr[i] = s[start + i];
			i++;
		}
	}
	ptr[i] = '\0';
	return (ptr);
}
