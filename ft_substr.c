#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*cpy_str;
	size_t	str_len;
	size_t	i;

	i = 0;
	str_len = ft_strlen(s);
	if (start > str_len)
		return (ft_strdup(""));
	if (len > str_len - start)
		len = str_len - start;
	cpy_str = ft_calloc(len + 1, sizeof(char));
	if (!cpy_str)
		return (NULL);
	while (i < len)
	{
		cpy_str[i] = s[start + i];
		i++;
	}
	return (cpy_str);
}
