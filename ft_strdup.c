#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	int	i;

	i = 0;
	ptr = NULL;
	ptr = malloc (ft_strlen(s1) * sizeof(char) + 1);
	if (!ptr)
		return (0);
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = '\0'; 
	return (ptr);
}
