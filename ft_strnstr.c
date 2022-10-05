#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;

	i = 0;
	if (*needle == '\0' )
		return ((char *)haystack);
	while (haystack[i] != '\0')
	{
		j = 0;
		while (haystack[i+j] == needle[j] && i+j < len)
			j++;
		if (j == (size_t)ft_strlen(needle))
			return ((char *)haystack + i);
		i++;
	}
	return (0);
}
