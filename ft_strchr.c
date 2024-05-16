#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	int		s_len;
	char	cc;

	i = 0;
	s_len = ft_strlen(s) + 1;
	cc = (char) c;
	while (i++ < s_len)
	{
		if (cc == s[i])
			return ((char *)&s[i]);
	}
	if (s[i] == cc)
		return ((char *)&s[i]);
	return (NULL);
}
