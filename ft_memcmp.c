#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	unsigned char *c_s1;
	unsigned char *c_s2;

	c_s1 = (unsigned char *) s1;
	c_s2 = (unsigned char *) s2;
	i = 0;
	while(i < n)
	{
		unsigned char str1 = (unsigned char) c_s1[i];
		unsigned char str2 = (unsigned char) c_s2[i];
		if(str1 != str2)
			return (str1 - str2);
		i++;
	}
	return 0;
}
