/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquintil <aquintil@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 09:02:35 by aquintil          #+#    #+#             */
/*   Updated: 2022/11/15 08:19:39 by aquintil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
*/

int ft_words(char const *s, char c)
{
	int	i;
	int words;

	words = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		words++;
		while (s[i] && s[i] != c)
			i++;
	}
	if (s[ft_strlen(s) - 1] == c)
		words--;
	return (words);
}

void	ft_clean(char **ptr, int words)
{
	while (words > 0)
	{
		words--;
		free(ptr[words]);
	}
	free(ptr);
}

char **ft_split(char const *s, char c)
{
	int	i;
	int	j;
	int	k;
	int	words;
	char	**ptr;

	ptr = NULL;
	words = 0;
	i = 0;
	if (!s)
		ptr[0] = "";
	ptr = malloc((ft_words(s,c) + 1) * sizeof(char *));
	if (!ptr)	
		return (0);
	while (s[i] && words < ft_words(s,c))
	{
		while (s[i] && s[i] == c)
			i++;
		j = 0;
		while (s[i] && s[i] != c)
		{
			j++;
			i++;
		}
		ptr[words] = malloc((j + 1) * sizeof(char));
		if (!ptr[words])
		{
			ft_clean(ptr, words);
			return (0);
		}
		k = 0;
		while (k < j)
		{
			ptr[words][k] = s[i - j + k];
			k++;
		}
		ptr[words][k] = '\0';
		words++;
	}
	ptr[words] = NULL;
	return (ptr);
}

/*
int	main()
{
	char 		**ptr = ft_split("", 'z');
	int		i;
	int		j;

	i = 0;
	while (ptr[i])
	{
		j = 0;
		while (ptr[i][j])
		{
			printf("%c", ptr[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
	//system ("leaks a.out");
}
*/




