/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquintil <aquintil@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 08:20:45 by aquintil          #+#    #+#             */
/*   Updated: 2022/11/03 11:38:49 by aquintil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

static int	find_matches(int i, int start, char const *s1, char const *set)
{
	int	match;
	int	j;

	match = 1;
	while (match)
	{
		match = 0;
		j = 0;
		while (set[j] && !match)
		{
			if (s1[i] == set[j])
				match = 1;
			j++;
		}
		if (start == 1)
			i++;
		else
			i--;
	}
	if (start == 1)
		return (i - 1);
	else
		return (i + 1);
}

#include <stdio.h>
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	int		i;
	int		start;
	int		end;
	int		size;

	i = 0;
	ptr = NULL;
	start = find_matches(0, 1, s1, set);
	end = find_matches(ft_strlen(s1) - 1, 0, s1, set);
	printf("%i\n", start);
	printf("%i\n", ft_strlen(s1));
	printf("%i\n", end);
	if (start == ft_strlen(s1))
		size = 1;
	else
		size = end - start + 2 ;
	ptr = malloc((size) * sizeof(char));
	if (!ptr)
		return (0);
	while (start <= end)
	{
		ptr[i] = s1[start];
		i++;
		start++;
	}
	ptr[i] = '\0';
	return (ptr);
}

int main()
{
	char *s1 = "          ";
	char *set = " ";

	//printf("%i\n", ft_strlen(s1));
	//printf("%i\n", findMatches(0, 1, s1, set));
	//printf("%i\n", findMatches(ft_strlen(s1) - 1, 0, s1, set));
	printf("%s\n", ft_strtrim(s1, set));
}


