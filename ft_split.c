/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquintil <aquintil@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 09:02:35 by aquintil          #+#    #+#             */
/*   Updated: 2022/12/26 11:23:40 by aquintil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	i;
	int	words;

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

static void	ft_clean(char **ptr, int words)
{
	while (words)
	{	
		words--;
		free(ptr[words]);
	}
	free(ptr);
}

static char	*ft_get_word(char const *s, char c, int *i)
{
	int		j;
	int		k;
	char	*word;

	j = 0;
	while (s[*i] && s[*i] != c)
	{
		j++;
		(*i)++;
	}
	k = 0;
	word = malloc((j + 1) * sizeof(char));
	if (!word)
		return (0);
	while (k < j)
	{
		word[k] = s[*i - j + k];
		k++;
	}
	word[k] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		words;
	char	**ptr;

	if (!s)
		return (0);
	ptr = malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (!ptr)
		return (0);
	i = 0;
	words = 0;
	while (s[i] && words < ft_count_words(s, c))
	{
		while (s[i] && s[i] == c)
			i++;
		ptr[words] = ft_get_word(s, c, &i);
		if (!ptr[words])
		{
			ft_clean(ptr, words);
			return (0);
		}
		words++;
	}
	ptr[words] = NULL;
	return (ptr);
}
