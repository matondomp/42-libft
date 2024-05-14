#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *c_dest;
	char *c_src;
	size_t	i;

	i = 0;
	c_dest = (char *) dst;
	c_src = (char *) src;
	if(dst == NULL || src == NULL)
		return dst;
	if(c_dest > c_src)
	{
		while(len-- > 0)
		{
			c_dest[len] = c_src[len];
		}
	}
	else
	{
		while(i < len)
		{
			c_dest[i] = c_src[i];
			i++;
		}
	}
	return (dst);
}
