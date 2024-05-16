#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dest_size)
{
	size_t	dst_length;
	size_t	src_length;
	size_t	i;
	size_t	j;

	j = 0;
	src_length = ft_strlen(src);
	dst_length = ft_strlen(dst);
	i = dst_length;
	if (dest_size <= dst_length)
		return (src_length + dest_size);
	while (src[j] && i < dest_size - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst_length + src_length);
}
