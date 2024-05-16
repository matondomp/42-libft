#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr_s;
	unsigned char	ptr_c;
	size_t			i;

	i = 0;
	ptr_s = (unsigned char *) s;
	ptr_c = (unsigned char) c;
	while (i < n)
	{
		if (ptr_s[i] == ptr_c)
			return ((void *)(&ptr_s[i]));
		i++;
	}
	return (NULL);
}
