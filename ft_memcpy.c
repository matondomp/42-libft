
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char *temp_dst;
	char *temp_src;
	size_t i;
	
	if(dst == NULL || src == NULL || n == 0)
		return (dst);

	temp_dst = (char *) dst;
	temp_src = (char *) src;
	i = 0;
	while(i < n)
	{
		temp_dst[i] = temp_src[i];
		i++;
	}
	return (temp_dst);
}
