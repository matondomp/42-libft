#include "libft.h"

int	count_digit(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		count++;
		n = -n;
	}
	while (n > 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

void	bigger_then_zero(char *str, long *n, int *i)
{
	if (*n < 0)
	{
		str[0] = '-';
		*n = -(*n);
	}
	while (*n > 0)
	{
		str[(*i)--] = '0' + (*n % 10);
		*n /= 10;
	}
}

char	*minimal_value(void)
{
	char	*str;

	str = (char *)malloc(12 * sizeof(char));
	if (!str)
		return (NULL);
	ft_memcpy(str, "-2147483648", 11);
	return (str);
}

char	*ft_itoa(int nbr)
{
	int		i;
	long	n;
	char	*str;

	n = nbr;
	if (n == -2147483648)
		return (minimal_value());
	i = count_digit(n);
	str = (char *)malloc((i + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[i--] = '\0';
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}
	bigger_then_zero(str, &n, &i);
	return (str);
}
