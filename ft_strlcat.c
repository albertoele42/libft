/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquintil <aquintil@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 17:31:19 by aquintil          #+#    #+#             */
/*   Updated: 2022/09/22 17:31:22 by aquintil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned	int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	count1;
	unsigned int	count2;
	unsigned int	src_len;
	unsigned int	aux;

	count1 = 0;
	count2 = 0;
	src_len = ft_strlen(src);
	while (dest[count1] != '\0')
	{
		count1++;
	}
	aux = count1;
	if (size == 0 || size <= count1)
		return (src_len + size);
	while (src[count2] != '\0' && count2 < size - aux - 1)
	{
		dest[count1] = src[count2];
		count1++;
		count2++;
	}
	dest[count1] = '\0';
	return (aux + src_len);
}
