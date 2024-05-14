#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dest_size)
{
	size_t dst_length = ft_strlen(dst);
	size_t src_length = ft_strlen(src);
	size_t i = dst_length;
	size_t j = 0;

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