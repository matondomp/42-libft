#include "libft.h"

int	word_count(const char *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s == c)
		{
			in_word = 0;
		}
		else if (!in_word)
		{
			count++;
			in_word = 1;
		}
		s++;
	}
	return (count);
}

void	ft_free(char **s, size_t count)
{
	while (count--)
	{
		free(s[count]);
	}
	free(s);
}

char	*fill_word(const char *s, int start, int end)
{
	char	*substr;
	int		i;

	substr = (char *)malloc(end - start + 2);
	if (!substr)
		return (NULL);
	i = 0;
	while (start <= end)
	{
		substr[i++] = s[start++];
	}
	substr[i] = '\0';
	return (substr);
}

char	**fill_str(const char *s, char c, char **str, int *j)
{
	int	start;
	int	end;
	int	i;

	start = 0;
	end = 0;
	i = 0;
	while (s[end])
	{
		if (s[end] == c)
		{
			str[i] = fill_word(s, start, end - 1);
			if (!str[i])
			{
				ft_free(str, i);
				return (NULL);
			}
			start = end + 1;
			i++;
		}
		end++;
	}
	str[i] = fill_word(s, start, end - 1);
	*j = i;
	return (str);
}

char	**ft_split(const char *s, char c)
{
	int		i;
	int		num_words;
	char	**str;
	char	**empty_str;

	if (*s == '\0')
	{
		empty_str = (char **)malloc(sizeof(char *));
		if (!empty_str)
			return (NULL);
		empty_str[0] = NULL;
		return (empty_str);
	}
	num_words = word_count(s, c);
	str = (char **)ft_calloc(num_words + 1, sizeof(char *));
	if (!str)
		return (NULL);
	fill_str(s, c, str, &i);
	if (!str[i])
	{
		ft_free(str, i);
		return (NULL);
	}
	str[i + 1] = NULL;
	return (str);
}
