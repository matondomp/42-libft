#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	size_t			cur;

	cur = 0;
	ptr = (unsigned char *) b;
	while (cur < len)
	{
		ptr[cur] = (unsigned char) c;
		cur++;
	}
	return (b);
}
