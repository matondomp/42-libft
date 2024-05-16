#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*c_hay;
	size_t	i;
	size_t	j;

	i = 0;
	c_hay = (char *) haystack;
	if (needle[i] == 0)
		return ((char *) haystack);
	while (c_hay[i] && i < len)
	{
		j = 0;
		while (c_hay[i + j] && needle[j]
			&& c_hay[i + j] == needle[j] && (i + j) < len)
		{
			j++;
			if (needle[j] == 0)
				return ((char *) haystack + i);
		}
		i++;
	}
	return (0);
}
