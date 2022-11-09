/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquintil <aquintil@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 09:02:35 by aquintil          #+#    #+#             */
/*   Updated: 2022/11/09 12:17:05 by aquintil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int ft_size(char const *s, char c)
{
	int	i;
	int j;
	int	size;

	size = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		j = 0;
		while (s[i] && s[i] != c)
		{
			j++;
			i++;
		}
		size += j + 1;
	}
	return (size);
}

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
	if (s[strlen(s) - 1] == c)
		words--;
	return (words);
}

void ft_split(char const *s, char c)
{
	int		i;
	int		pos;
	char	**ptr;

	pos = 0;
	i = 0;
	ptr = NULL;
	ptr = malloc(ft_size(s,c) * sizeof(char));
}

int	main()
{
	char const	s[] = "Frase***con*******separadores**de*prueba";
	printf("%i", ft_size(s, '*'));
}

/*
void ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	pos;
	size_t	word;
	char	**ptr;

	i = 0;
	pos = 0;
	word = 0;
	ptr = NULL;
	ptr = malloc((strlen(s) + 1) * sizeof(char));
	while (s[i] != '\0')
	{
		if (s[i] == c || i == strlen(s)-1)
		{		
			ptr[word] = malloc((i - pos + 1) * sizeof(char));
			j = 0;
			while (j < i - pos)
			{
				ptr[word][j] = s[pos + j];
				j++;
			}
			ptr[word][j] = '\0';
			printf("%lu  -  ", (i - pos + 1));
			printf("%s\n", ptr[word]);
			pos = i + 1;
			word++;
		}
		i++;
	}
	free(ptr);
}

int	main()
{
	char const	s[] = "*Frase***con*******separadores**de*prueba****";
	ft_split(s, '*');
}
*/
