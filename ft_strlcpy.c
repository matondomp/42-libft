#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dst_size)
{
	size_t	src_size;

	src_size = ft_strlen(src);
	if (src_size < dst_size)
	{
		ft_memcpy(dst, src, src_size + 1);
	}
	else if (dst_size != 0)
	{
		ft_memcpy(dst, src, dst_size - 1);
		dst[dst_size - 1] = '\0';
	}
	return (src_size);
}
